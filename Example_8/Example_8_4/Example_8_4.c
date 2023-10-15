#include <stdio.h>
#include <stdlib.h>

int main ()
{
int a ; 
//Prompt user for their age and read 
printf("Please type in your age\n");
scanf("%d",&a);

if (a<=5)
{
    printf("Still a baby\n");
}

else if ((a>5) && (a<=12))
{
    printf("The junior years\n");
}

else if ((a>12) && (a<20))
{
    printf("Teenage Years\n");
}
else if (a>20)
{
    printf("Downhill all the way now!\n");
}
return 0; 
}

//Other method i tried however switch case must be integer values :/
//Now to define the cases
//switch ( a ) 
//{
//case (a<=5):
//printf("Still a baby\n");
//case ((a>5) && (a<=12)):
//printf("The junior years\n");
//case((a>12) && (a<20)):
//printf("Teenage years\n");
//case((a>=20)):
//printf("Downhill all the way now!\n");
//break;
//default: //if no case is met
//printf("Invalid age given!\n");
//}
//return 0;