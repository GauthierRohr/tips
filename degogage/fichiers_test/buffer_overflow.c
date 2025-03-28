/* =============================================== */
/* 2. DÉBORDEMENT DE TABLEAU (Buffer Overflow) */
/* =============================================== */

#if 0
// [CODE BUGGÉ]
#include <stdio.h>
int main()
{
    int arr[3];
    for (int i = 0; i <= 3; i++)  // Bug: <= au lieu de <
        arr[i] = i;               // Écrit en dehors du tableau
    return 0;
}
#endif

/*
[DEBUG]:
$ gcc -g -fsanitize=address overflow.c -o overflow
$ ./overflow
==ERROR: AddressSanitizer: stack-buffer-overflow
*/

// [SOLUTION]
#if 0
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)  // Condition corrigée
        arr[i] = i;
    return 0;
}
#endif
