#include <stdio.h>
void main(){
      int a,b,result,multiple,substract;
      printf("please enter the numbers:");
      scanf("%d%d",&a,&b);

      result = a+b;
      multiple = a*b;
      substract = a-b;

      printf("The sum of the number is: %d \n The multiple of the number is: %d \n The substraction of the number is : %d",result,multiple,substract);

}