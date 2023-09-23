#include <stdio.h>
int main(void){
    // Signed Integer Data (by default program assign signed)
    short int a=45;
    printf("short Data- %hi\n", a);
    signed int b=100000;
       printf("signed Int/Int Data- %d\n", b);
    //    Long- %ld, li, signed long int=long
    long c=40000000L; // long

       printf("Signed long int Data- %ld\n", c);
        // Long long- %lld, lli, signed long long int=long long
    long long d=5004324; // long long

       printf("Signed long long int Data- %lld\n", d);

    // Octal Int- %o
    int o=077;

       printf("Octal int Data- %o\n", o);
       printf("Octal to Decimal Data- %d\n", o);
           // Octal Int- %x, %X
    int h=0x43F;

       printf("Hexadecimal int Data- %X\n", h);

       unsigned short us=-5; // Unsigned short - %u
              printf("Unsigned int Data- %X\n", us);
    return 0;
}