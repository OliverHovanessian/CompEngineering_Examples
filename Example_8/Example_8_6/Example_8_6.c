#include <stdio.h>
#include <stdlib.h>
// The same as ex8.5 but using the switch case to be faster
int main ()
{
int a;
//Prompt the user input
printf("Please enter a number in the range 0-9\n");
scanf("%d",&a);
switch( a )
{
    case 0 :
printf("Black\n");
    break;

    case 1:
printf("Brown\n");
    break;

    case 2:
 printf("Red\n");
    break;

    case 3:
printf("Orange\n");
    break;
    
    case 4:
printf("Yellow\n");
    break;

    case 5:
printf("Green\n");
    break;

    case 6:
 printf("Blue\n");
    break;

    case 7:
 printf("Violet\n");
    break;

    case 8:
printf("Grey\n");
    break;
    
    case 9:
printf("White\n");
    break;

default: 
printf("Invalid input\n");
}
    return 0;
}