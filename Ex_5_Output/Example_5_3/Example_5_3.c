//Modify the code you have written for exercise 2 such that each value is displayed on a new line- use better formatters
#include <stdio.h>
#include <stdlib.h> 

int main ()
{
//Declaring the variables
int a = 123;
float b = 12.456f;

//Display the text
printf ("Examples of different integer formatting\n");
printf ("a = %d (no modifier)\n",a);
printf ("a = %6d (w:6, justify:right)\n",a);
printf ("a = %-6d (w:6 )\n ",a);

//Now for float variables
printf ("Examples of float formatting\n");
printf ("b = %f (no modifier)\n",b);
printf ("b = %6.2f (w:6, 2dp, justify:right)\n",b );
printf ("b = %-6.1f (w:6,_1dp)\n",b);

//The decimal point decides where the cut off in decimals are: 2dp or 1dp
//the minus sign before the number means it is printed to the left- If no signs then they will print at the same hieght

//exit from main
return 0;
}