#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    for (i = 0; i < 20; i++)
    {
        printf("%d \n", rand() % 20 + i);
    }

    return 0;
}
// gcc ./math.c -o math && ./math