#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sen[100] = "ABC";
    strcat(sen, " DEF"); // String Concat
    printf("Concat String: %s\n", sen);
    // String Replace/ reassign value
    strcpy(sen, "ABC");
    printf("Replace String: %s\n", sen);
    return 0;
}