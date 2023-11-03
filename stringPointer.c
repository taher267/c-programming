#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name1[] = "This is Name one";
    char *name2 = "This is Name Two";
    name2 = " Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s. Lorem Ipsum is simply dummy text of the printing and typesetting industry.  Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s. Lorem Ipsum is simply dummy text of the printing and typesetting industry.";
    puts(name2);
    return 0;
}

// gcc ./stringPointer.c -o stringPointer && ./stringPointer