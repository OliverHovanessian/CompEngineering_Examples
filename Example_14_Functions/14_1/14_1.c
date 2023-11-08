//Function is passed xy coords and returns the polar coordinates at this point 
//function is passed 4 parameters - xy and r theta 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float PolarCoordinateFinder(float x, float y, float *r, float *theta)
{
   
    if (x==0 || y==0) //As 0/0 will give an error
    {
        return -1;
    }
    
    *r = sqrt(x*x + y*y) ;
    *theta = y / x ;
    return 0;
}

int main(void)
{
//Declaring our variables 
float r , theta , x , y , retval ;

//Asking the user to input our coordinate values
printf("\nPlease input a value for the x coordinate");
scanf("%f",&x);

printf("\nPlease input a value for the y coordinate");
scanf("%f",&y);

retval = PolarCoordinateFinder(x,y,&r,&theta);

if (retval == -1)
{
    printf("\nError, please give both x and y non-zero values");
}
//Now we want to use the function to get our values for R and Theta 
else
{
    printf("\nThe value for R=%f and the value for Theta=%f",r,theta);
}
}