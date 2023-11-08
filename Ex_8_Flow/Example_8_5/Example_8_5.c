#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // using the if else method assign colours to numbers 0-9
int a ;
//Prompt the user input
printf("Please enter a number in the range 0-9\n");
scanf("%d",&a);
//Now build if else for the colour range
if (a==0)
{
    printf("Black\n");
}
else if (a==1)
{
    printf("Brown\n");
}
else if (a==2)
{
    printf("Red\n");
}
else if (a==3)
{
    printf("Orange\n");
}
else if (a==4)
{
    printf("Yellow\n");
}
else if (a==5)
{
    printf("Green\n");
}
else if (a==6)
{
    printf("Blue\n");
}
else if (a==7)
{
    printf("Violet\n");
}
else if (a==8)
{
    printf("Grey\n");
}
else if (a==9)
{
    printf("White\n");
}
else 
{
    printf("Invalid input\n");
}
//This code is so long, so easy to make mistakes and not realise
return 0; //exit from main
}