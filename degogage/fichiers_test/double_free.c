/* =============================================== */
/* 7. DOUBLE FREE */
/* =============================================== */

#if 1
// [CODE BUGGÉ]
#include <stdlib.h>
int main()
{
    int *p = malloc(sizeof(int));
    free(p);
    free(p);  // Double libération!
    return 0;
}
#endif

/*
[DEBUG]:
$ valgrind ./doublefree
== Invalid free() / delete / delete[] / realloc()
*/

#if 0
// [SOLUTION]
int main()
{
    int *p = malloc(sizeof(int));
    free(p);
    p = NULL;  // Évite les double free
    return 0;
}
#endif
