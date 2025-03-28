/* =============================================== */
/* 5. FUITE MÉMOIRE (Memory Leak) */
/* =============================================== */

#if 1
// [CODE BUGGÉ]
#include <stdlib.h>
void leak() {
    malloc(100);  // Pas de free!
}

int main()
{
    leak();
    return 0;
}
#endif

/*
[DEBUG]:
$ valgrind --leak-check=full ./leak
== 100 bytes in 1 blocks are definitely lost
*/

#if 0
// [SOLUTION]
void no_leak() {
    void *p = malloc(100);
    free(p);  // Toujours libérer!
}
#endif
