#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char C[15] = "";
    char D[20];
    char *pD = D;
    fgets(pD, 15, stdin);

    printf("%s\n", pD);

    return 0;
}

// gcc ./problemWithStrLen.c -o problemWithStrLen && ./problemWithStrLen