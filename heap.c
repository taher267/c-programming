#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *points;
    points = (int *)malloc(5 * sizeof(int));
    free(points);
    // printf("%d\n", points);

    return 0;
}

// gcc ./heap.c -o heap && ./heap