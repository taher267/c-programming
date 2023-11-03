#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sen[100] = "ABC";
    strcat(sen, " DEF"); // String Concat
    printf("Print: %s", sen);
    return 0;
}