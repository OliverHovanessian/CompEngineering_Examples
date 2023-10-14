#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    //Declare variables 
float Volume, SurfaceArea, R, pi;
 //Ask the user to input a value for r, and set a value for pi as I dont know how to use M_PI
pi = 3;
printf ("Please enter a value for the radius, R\n");

//Use scanf to be able to let the user input a value for R
scanf ("%f",&R);

//Display that this has been inputted into the program
printf("The value given for the radius is %.2f",R);

Volume = (4*pi*R*R*R)/3;
SurfaceArea = 4*pi*R*R;

printf ("\nThe surface area for a radius,R=%.2f,is %.2f",R,SurfaceArea);
printf ("\nAnd the volume obtained for the sphere is %.3f",Volume);
}
