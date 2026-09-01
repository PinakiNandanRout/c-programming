#include <stdio.h>

void number_print(int);

void main()              // function declaration
{
    int num = 5;
    int num1 = 6;

    number_print(num );    //function call   || num is actual parameter
    number_print(num1 );
}

void number_print(int a)         //function definition || 'a' is formal parameter
{
    printf("%d",a);  // video addressde
}