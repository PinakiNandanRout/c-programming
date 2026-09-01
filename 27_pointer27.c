#include <stdio.h>
int main ()
{
    int var = 20;
    int *ptr = &var;

    printf("\n the addressof var is :%x\n",&var);
    // address of the variable

    printf("\nThe adder stored in ptr is :%x\n",ptr);
    // address stored in the pointer

    printf("\nvalue of var stored in ptr:%d\n",*ptr);
    // access the value using thr pointer

    return 0;


}