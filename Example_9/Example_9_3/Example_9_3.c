#include <stdio.h>
#include <stdlib.h>

int main ()
{
//Declare variable for name input -  we dont need to initialise since test condition is not based on value
char name[50] ;
//Ask for and read name input
printf("\nPlease enter your name");
fgets(name,50,stdin);
//
while(1)
{
    //the 1 in while can be replaced by any integer and will repeat for any input
    //Code in {} is executed if condition is true
    printf("Your name is %s\n",name);
}
return 0;
}