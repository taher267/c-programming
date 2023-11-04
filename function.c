// #include <stdio.h>
// #include <stdlib.h>
// float currencyConverter(float amount, char currency = "usd");
// int main()
// {
//     int amount = 5;
//     float result = currencyConverter((float)amount);
//     printf("%.2f\n", result);
//     // printf("Please enter two numbers:");

//     return 0;
// }
// float currencyConverter(float amount, char currency = "usd")
// {
//     if (currency)
//     {
//         printf("Currency: %s", currency);
//     }

//     // , char currency = 'EURO'
//     float USD = amount * 1.37;
//     return USD;
// }
#include <stdio.h>

#include <stdarg.h>

void optionalParams(int num, ...)

{

    va_list args;

    va_start(args, num);

    // Loop through the variadic arguments

    for (int i = 0; i < num; i++)
    {

        int value = va_arg(args, int);

        printf("Optional Parameter %d: %d\n", i + 1, value);
    }

    va_end(args);
}

int main()

{

    optionalParams(3, 10, 20, 30); // Passing three optional parameters

    // optionalParams(5, 1, 2, 3, 4, 5); // Passing five optional parameters

    return 0;
}
// gcc ./function.c -o function && ./function