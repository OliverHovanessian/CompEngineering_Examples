#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//1) Define our function
//   This will take form of: function type Name (type variable)
float DegreesToRadConverter (float degrees)
//Now we will Define the code that is inside the function we could do this after the main code too
{
float Pi = (float)M_PI ;
return(Pi*degrees/180);
}
//Now for the main operations of the computer 
//Including - asking for input variable magnitude then printing out the conversion using the function that was previously defined
int main()
{
    //Define the variables and their type
    float deg, Radians;
    //Ask for input & read 
    printf("Please input an angle in degrees\n");
    scanf("%f",&deg);
    //Put the output of the function into a variable (this is optional you can put the function straight into the printf)
    Radians = DegreesToRadConverter(deg) ;
    //Print out the variable for the user to see
    printf("The converted angle into radians is %f rad",Radians);

    return 0;
}