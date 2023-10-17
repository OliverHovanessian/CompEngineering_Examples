//Expand the code from section 9.6 to display both the value of the loop variable and this value
//squared

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //Declare variable and initialise to 1
int i, a, b ,c;
printf("Please enter a value for the lower bound of the loop and then the upper bound of the loop\n");
scanf("%d %d",&a,&b);
//We will be counting from 1-15
for(i=a;i<=b;i++)
{
    //Print the number, not on different lines
    c=i*i ;
    printf("%d, i^2 = %d\n",i,c);
    //The width spacing isnt equally spacing out the numbers- the numbers with 2 characters take up more space
    //Tab will give an equal spacing but it wont be equal to 1 space (\t)
}
return 0;
}