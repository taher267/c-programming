#include <stdio.h>
int main()
{
    int arrs[] = {
        3,
        5,
        33,
        67,
        78,
        89,
    };
    // printf("%u\n", (unsigned int)&arrs);
    // printf("%u\n", (unsigned int)&arrs[0]);
    int length = sizeof(arrs) / sizeof(arrs[0]);
    printf("Size of int:%d\n", length);
    return 0;
}