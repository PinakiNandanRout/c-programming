#include <stdio.h>
int main()
{
 int i=1;
 count: // this is label
 printf("%d\n",i);
 i++;
 if(i<=10){
    goto count; // this jumps to label count
 }

}