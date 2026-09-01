#include <stdio.h>
int main()
{
    int pinaki = 10;
    while (pinaki >=0)
    {
        if(pinaki==7)
        {
            pinaki--;
            continue;
        }
        printf("%d",pinaki);
        pinaki--;
    }
    



}