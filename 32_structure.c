#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
                    /* data */
}e1;// declaring e1 variable for structure . we can add more variable like }e1,e2;
    // and also have another method for variable given below in int main()
int main()
{
    struct employee e1;
    //store 1st employee information
    e1.id = 101;
    strcpy(e1.name,"Learnvern");//coping string into char array

    //printing 1st employee information
    printf("employee 1 id : %d\n",e1.id);
    printf("employee 1 name : %s\n",e1.name);

    return 0;
}    
