#include <stdio.h>
void fun(int a)
{
    printf("value of a is %d\n",a);
}

int main()
{
    // fun_ptr is apointer to function fun()
    void(*fun_ptr)(int) = &fun;

    // involving fun() using fun_ptr
    (*fun_ptr)(10);

    return 0;

}
