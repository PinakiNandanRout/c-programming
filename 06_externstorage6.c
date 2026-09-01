#include<stdio.h>
int main ()
{
    extern int a;// compiler will search here for a variable a defined and initialized some where in
    printf("%d",a);
}

int a = 20;
// comple -  gcc externstorage.c
// rune   -  .\a.exe ( default name ) gcc thinks user didnt give me a name so i will use default name