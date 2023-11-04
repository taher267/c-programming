#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPointer;
    fPointer = fopen("writeFile.txt", "r");
    char sinleLine[150];
    while (!feof(fPointer)) // feof File end of file
    {
        fgets(sinleLine, 150, fPointer);
        printf("%s", sinleLine);
        // puts(sinleLine);
    }

    fclose(fPointer);
    return 0;
}

// gcc ./readFile.c -o readFile && ./readFile