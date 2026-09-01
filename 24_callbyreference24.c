#include <stdio.h>
void swap (int *, int *);
int main()
{
    int a = 10;
    int b = 20;
    printf("\nBefore swap, value of a :%d",a);
    printf("\nBefore swap, value of b :%d",b);

    swap(&a, &b);

    printf("\nAfter swap, value of a :%d",a);
    printf("\nAfter swap, value of b :%d",b);

    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;                  //video - working with user defined function 4n0. video
    *a = *b;
    *b = temp;
}