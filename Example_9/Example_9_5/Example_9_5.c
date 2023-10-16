//9.5 develop a code that will count from 1 to 15 and displays the value of the loop counter on the screen with 
//each value displayed on the same line seperated from the previous by a single space (i.e: 1 2 3 4 5 ... )
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //Declare variable and initialise to 1
int i=1;
//We will be counting from 1-15
for(i=1; i<16 ; i++)
{
    //Print the number, not on different lines
    printf("%4d",i);
    //The width spacing isnt equally spacing out the numbers- the numbers with 2 characters take up more space
    //Tab will give an equal spacing but it wont be equal to 1 space (\t)
}
return 0;
}