/* =============================================== */
/* 3. UTILISATION APRÈS FREE (Use-After-Free) */
/* =============================================== */

#if 1
// [CODE BUGGÉ]
#include <stdlib.h>
#include <string.h>
int main()
{
    char *s = malloc(10);
    free(s);
    strcpy(s, "bug");  // UAF: écriture après libération
    return 0;
}
#endif
/*
[DEBUG]:
$ valgrind --leak-check=full ./uaf
== Invalid write of size 4
==    at 0x1091A3: main (uaf.c:7)
*/

// [SOLUTION]
#if 0
int main()
{
    char *s = malloc(10);
    strcpy(s, "ok");
    free(s);
    s = NULL;  // Empêche toute réutilisation
    return 0;
}
#endif
