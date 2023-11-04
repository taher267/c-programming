#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPointer;
    fPointer = fopen("writeFile.txt", "w+");
    fputs("One Two Three Four Five Six Siven Eight Nine Ten", fPointer);
    fseek(fPointer, 4, SEEK_SET); // SEEK_SET start of Begaining
    fputs("2 3 4 5 6", fPointer);
    fseek(fPointer, -8, SEEK_END); // SEEK_END End of Ending
    fputs("7 8 9 0", fPointer);
    /*
    fPointer = fopen("writeFile.txt", "a");
    fprintf(fPointer, "Aaujubillahi\n min\n ash shaytonir\n Rojim!");
    Aaujubillahi
    min
    ash shaytonir
    Rojim!
    */

    fclose(fPointer);
    return 0;
}

// gcc ./rendomAccessFile.c -o rendomAccessFile && ./rendomAccessFile