#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPointer;
    fPointer = fopen("writeFile.txt", "w");
    fprintf(fPointer, "Bismillahir\n Rohmanir\n Rohim");
    // fprintf(fPointer, "[{\"grettings\":\"Bismillah\"}]"); //writeFile.json instead of writeFile.txt
    // puts("Enter first name");
    fclose(fPointer);
    return 0;
}

// gcc ./writeFile.c -o writeFile && ./writeFile