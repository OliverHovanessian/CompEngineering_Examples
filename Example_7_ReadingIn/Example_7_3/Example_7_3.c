#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
float SA, r , h ;

//ask the user for the values of height and radius to find the surface area
printf("Please enter a value for the radius of the cylinder and then its height\n");
scanf("%f %f",&r,&h);
printf("The radius you chose was %.2f and the height chosen is %.2f\n",r,h);

//Now use the equation for the surface area (with MPI)- then display
SA = 2*(float)M_PI*r*r + 2*(float)M_PI*r*h ;
printf("The surface area for the cylinder is %.2f",SA);

return 0;
}