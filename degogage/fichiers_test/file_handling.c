/* =============================================== */
/* 10. ERREUR DE FICHIER (File Handling) */
/* =============================================== */

#if 1
// [CODE BUGGÉ]
#include <stdio.h>
int main()
{
    FILE *f = fopen("inexistant.txt", "r");
    char buffer[100];
    fgets(buffer, 100, f);  // Crash si f = NULL
    fclose(f);
    return 0;
}
#endif

/*
[DEBUG]:
$ gdb ./file_error
Program received signal SIGSEGV
*/

#if 0
// [SOLUTION]
int main()
{
    FILE *f = fopen("file.txt", "r");
    if (f == NULL) {
        perror("Erreur d'ouverture");
        return 1;
    }
    char buffer[100];
    if (fgets(buffer, 100, f) != NULL) {
        printf("%s", buffer);
    }
    fclose(f);
    return 0;
}
#endif