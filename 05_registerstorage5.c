#include<stdio.h>
int main(){
    register int a = 3;
    printf("%u",&a);//this will give a compile time error since we can not access the address of cpu register
    // if we want the address of a variable ,we should put a empers and (&) before it
    }
