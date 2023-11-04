#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *points;
    points = (int *)malloc(5 * sizeof(int));
    free(points);
    // printf("%d\n", points);
    int i, howMany, total;
    float average = 0.0;
    int *printsArray;
    printf("How manuy numbers do you want to average?\n");
    scanf("%d", &howMany);
    printsArray = (int *)malloc(howMany * sizeof(int));
    printf("Enter them!\n");
    for (i = 0; i < howMany; i++)
    {
        scanf(" %d", &printsArray[i]);
        total += printsArray[i];
    }
    average = (float)total / (float)howMany;
    printf("Average is %f", average);

    return 0;
}

// gcc ./heap.c -o heap && ./heap