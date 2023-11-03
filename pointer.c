#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    int *pNum = &num;
    printf("Address \t Name\t Value \n");
    printf("%p \t %s \t %d \n", pNum, "num", num);
    printf("%p \t %s \t %d \n", &pNum, "pNum", pNum);
    printf("*pNum: %d \n", *pNum);
    // change value by pointer
    *pNum = 35;
    printf("*pNum: %d \n", *pNum);
    return 0;
}

// gcc ./pointer.c -o pointer && ./pointer