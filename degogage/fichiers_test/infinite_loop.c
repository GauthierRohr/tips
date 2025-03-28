/* =============================================== */
/* 9. BOUCLE INFINIE */
/* =============================================== */

#if 1
// [CODE BUGGÉ]
#include <stdio.h>
int main()
{
    while (1) {  // Ne termine jamais
        printf("Infinite loop\n");
    }
    return 0;
}
#endif

/*
[DEBUG]:
CTRL+C pour arrêter
*/

#if 0
// [SOLUTION]
int main()
{
    int count = 0;
    while (count < 10) {  // Condition de sortie
        printf("Loop %d\n", count++);
    }
    return 0;
}
#endif
