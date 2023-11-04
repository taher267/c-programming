#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPointer;
    fPointer = fopen("writeFile.txt", "a");
    fprintf(fPointer, "Aaujubillahi\n min\n ash shaytonir\n Rojim!");

    fclose(fPointer);
    return 0;
}

// gcc ./appendFile.c -o appendFile && ./appendFile