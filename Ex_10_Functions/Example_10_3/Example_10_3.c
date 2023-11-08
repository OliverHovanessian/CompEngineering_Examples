//this is an exercise to show well written code can be reused 
//Copy paste 9.7 
//Now paste function developed in 10.3
//Change code in loop to call the function

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float DegreesToRadConverter (float degrees)
{
float Pi = (float)M_PI ;
return(Pi*degrees/180);
}
int main ()
{
int i, a, b;
float Radians;
printf("Please enter a value for the lower bound of the loop and then the upper bound of the loop\n");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
Radians = DegreesToRadConverter((float)i);
    printf("%d, Radians = %f\n",i,Radians);
}
return 0;
//We want the bounds to generate its equivalent (float) Radians
}