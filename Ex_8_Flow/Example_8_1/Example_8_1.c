#include <stdio.h>
#include <stdlib.h>

int main ()
{
int a=7, b=6 ;

//Single line of code conditional for value of a
if ( a == 7)
printf("The value of a is 7 so i will do this\n");

//Multiple lines of code conditional on b not equalling 4
//So we place this inside new {}
if (b!=4)
{
    printf("The value of b is not 4\n");
    printf("So I will do multiple tasks\n");
}
return 0; //exit from main
}