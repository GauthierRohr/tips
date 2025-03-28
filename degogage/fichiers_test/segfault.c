/* =============================================== */
/* 1. SEGFAULT - Accès NULL */
/* =============================================== */

// [CODE BUGGÉ]
#include <stdio.h>
int main()
{
    int *p = NULL;
    *p = 42;  // Crash ici
    return 0;
}

/*
[DEBUG]:
$ gcc -g segfault.c -o segfault
$ gdb ./segfault
(gdb) run
Program received signal SIGSEGV, Segmentation fault.
0x0000555555555151 in main () at segfault.c:6
6       *p = 42;
(gdb) print p
$1 = (int *) 0x0
*/

// [SOLUTIONS]
// Remplacer IF 0 par IF 1 pour tester 
#if 0
// Solution 1: Allouer mémoire
int main()
{
    int *p = malloc(sizeof(int));
    *p = 42;
    free(p);
    return 0;
}
#endif

#if 1
// Solution 2: Pointer vers variable existante
int main()
{
    int value;
    int *p = &value;
    *p = 42;
    return 0;
}
#endif

#if 0
// Solution 3: Vérifier le pointeur
int main()
{
    int *p = NULL;
    if (p != NULL) {
        *p = 42;
    } else {
        printf("Erreur: pointeur NULL\n");
    }
    return 0;
}
#endif
