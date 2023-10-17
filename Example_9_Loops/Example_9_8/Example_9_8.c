//This time you are required to expand the code from section 9.6
//to keep a running sum of the loop variable, displaying the final result only when the loop terminates

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //Declare variable and initialise to 1
int i, a, b, sum=0;
printf("Please enter a value for the lower bound of the loop and then the upper bound of the loop\n");
scanf("%d %d",&a,&b);
//We will be counting from 1-15
for(i=a;i<=b;i++)
{
    sum = sum + i ;
//Want a running sum 
 printf("%d ",i);
 if(i<b)
 {
    printf("+ ");
 }
}
printf ("= %d",sum);
return 0;
}

//Not sure if this is what was wanted however it works