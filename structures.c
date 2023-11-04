#include <stdio.h>
#include <stdlib.h>
#include "Headers/Person.h"

int main()
{
    struct person p1;
    struct person p2;
    p1.userID = 1;
    p2.userID = 2;
    puts("Enter first name");
    gets(p1.firstName);
    printf("%s", p1.firstName);

    return 0;
}

// gcc ./structures.c -o structures && ./structures