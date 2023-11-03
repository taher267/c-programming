#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[5] = {7, 8, 9, 4, 5};
    int i;
    // int *pNum = &num;
    // printf("Address \t Name\t Value \n");
    // printf("%p \t %s \t %d \n", pNum, "num", num);
    // printf("%p \t %s \t %d \n", &pNum, "pNum", pNum);
    // printf("*pNum: %d \n", *pNum);
    // // change value by pointer
    // *pNum = 35;
    // printf("*pNum: %d \n", *pNum);
    printf("Address \t Value \n");
    printf("%p \n", nums);
    for (i = 0; i < 5; i++)
    {
        printf("%p\t %d \n", &nums[i], nums[i]);
    }
    printf("%d \n", *nums);
    printf("%d \n", *(nums + 1));
    return 0;
}

// gcc ./pointer-of-array.c -o pointer-of-array && ./pointer-of-array