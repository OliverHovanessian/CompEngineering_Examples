#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double DegreesToRadiansToSineCosineTangent(double deg , double (*rad) , double (*sine), double (*cosine), double (*tangent))
{
    *rad = deg * M_PI / 180 ;
    *sine = sin(*rad);
    *cosine = cos(*rad);
    *tangent = tan(*rad);
    return 0;
}



int main (void)
{
    double Degrees, Radians , Sine, Cosine, Tangent , retval;
    int i , LoopStartValue , LoopEndValue;
    printf("Please enter a lower boundary of degrees");
    scanf("%d",&LoopStartValue);
    printf("Please enter the upper boundary of degrees");
    scanf("%d",&LoopEndValue);
    printf("Degs\tRad\tsin\tcos\ttan\n");
   
    for (i=LoopStartValue ; i<=LoopEndValue; i++)
    {
    Degrees=i;
    retval= DegreesToRadiansToSineCosineTangent(Degrees,&Radians,&Sine,&Cosine,&Tangent);
    printf("%.0lf\t%.3lf\t%.3lf\t%.3lf\t%.3lf\n",Degrees,Radians,Sine,Cosine,Tangent); 
    }
}