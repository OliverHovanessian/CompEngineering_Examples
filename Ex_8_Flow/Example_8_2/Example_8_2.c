#include <stdio.h>
#include <stdlib.h> 

int main () 
{
//we are developing a program in which the user is prompted  to enter a value
//if the value is between 0-10 then display a statement
//Define variable
int a ;
//Prompt the user for value of variable
printf("enter a number for the variable a\n");
scanf("%d",&a);
//a common error i make is forgetting to use the & in scanf
if ((a>0)&&(a<10))
{
printf("The number is in range\n");
}
else 
{
printf("The number is not in range\n");
}
return 0;
}