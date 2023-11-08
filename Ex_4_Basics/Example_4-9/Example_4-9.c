#include <stdio.h>
#include <stdlib.h>

int main ()
{
//Declare variables
int a = 10, b = 7;
float c = 12345.6f;
float ans;

//temporarily treat a and b as floats as we are gonna get a decimal number (type casting)
ans = (float)a / ( (float)b / c);

//Now Show the answer
printf("\nThe answer is %f",ans);

//Exit Program
return 0;
}