/* =============================================== */
/* 6. VARIABLE NON INITIALISÉE */
/* =============================================== */

#if 1
// [CODE BUGGÉ]
#include <stdio.h>
int main()
{
    int x;          // Non initialisé
    printf("%d\n", x);  // Comportement indéfini
    return 0;
}
#endif

/*
[DEBUG]:
$ valgrind --track-origins=yes ./uninit
== Use of uninitialised value
*/

#if 0
// [SOLUTION]
int main()
{
    int x = 0;      // Toujours initialiser
    printf("%d\n", x);
    return 0;
}
#endif
