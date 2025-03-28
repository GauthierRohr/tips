/* =============================================== */
/* 8. DÉPASSEMENT D'ENTIER (Integer Overflow) */
/* =============================================== */

#if 1
// [CODE BUGGÉ]
#include <stdio.h>
#include <limits.h>
int main()
{
    int x = INT_MAX;
    x++;  // Overflow
    printf("%d\n", x);
    return 0;
}
#endif

/*
[DEBUG]:
$ gcc -fsanitize=undefined overflow.c -o overflow
$ ./overflow
runtime error: signed integer overflow
*/

#if 0
// [SOLUTION]
#include <stdint.h>
int main()
{
    int32_t x = INT32_MAX;
    if (x < INT32_MAX) x++;  // Vérification
    else printf("Overflow possible\n");
    return 0;
}
#endif
