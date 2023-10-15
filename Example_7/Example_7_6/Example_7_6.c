#include <stdio.h>
#include <stdlib.h>

int main ()
{
//We want a program that first prompts the user to enter their name after which they are requested to enter their age.

char str[50];
int a;

//Ask for input 
printf("What is your name\n ");
//Store input into Name
fgets(str,100,stdin);

//Now ask for the age and store this into the variable age
printf("What is your age\n");
scanf("%d",&a);

printf("\nHello %s \nYou are %d years old",str,a);

return 0;
}