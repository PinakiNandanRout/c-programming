#include <stdio.h>

int main()
{

    int a = 17; // age of the person
    int l = 0; // have license or not
    
    if (a > 18)
    {
        printf("congratulations! you are eligible to drive \n");
        if (l == 1)
        {
            printf("great! you can drive safely");

        }
        else
        {
            printf("You are eligible but you do not possess a license");
        
        }
    }
else
{
    printf("OH! you are not eligible");
}
}