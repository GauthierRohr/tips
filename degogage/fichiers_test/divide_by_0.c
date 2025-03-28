/* =============================================== */
/* 4. DIVISION PAR ZÉRO */
/* =============================================== */

#if 1
// [CODE BUGGÉ]
#include <stdio.h>
int divide(int a, int b) {
    return a / b;  // Crash si b = 0
}

int main()
{
    printf("%d\n", divide(5, 0));
    return 0;
}
#endif

/*
[DEBUG]:
$ gdb ./divide
(gdb) catch throw
Catchpoint 1 (throw)
(gdb) run
Catchpoint 1 (exception thrown)
*/

// [SOLUTION]
#if 0
int divide(int a, int b) {
    if (b == 0) {
        printf("Erreur: division par zéro\n");
        return 0;
    }
    return a / b;
}
#endif
