#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char buffer[81];
    int i, ch;
    FILE* fp;

    fopen_s(&fp, "crt_getc.txt", "r");
    
    if (!fp) {
        printf("Failed to open file crt_getc.txt.\n");
        exit(1);
    }

    for (i = 0; (i < 80) && ((ch = getc(fp)) != EOF) && (ch != '\n'); i++) {
        buffer[i] = (char)ch;
    }

    buffer[i] = '\0';
    printf("Input was: %s\n", buffer);

    fclose(fp);

    _getch();
    return 0;
}