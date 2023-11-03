#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char A[50];
    char B[25];
    char C[75] = "";
    char D[75] = "Bismillah";
    puts("Bismillahir Rohmanir Rohim.");
    gets(C);
    puts(C);
    return 0;
}
// gcc ./puts-gets.c -o puts-gets && ./puts-gets