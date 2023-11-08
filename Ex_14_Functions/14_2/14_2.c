#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//We will be creating a function that us given an angle in degrees and returns values in radians, sine, cosine and tangent 
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
    double Degrees, Radians , Sine, Cosine, Tangent ;
    printf("Please input a value for the degrees 0-360");
    scanf("%lf",&Degrees);
    DegreesToRadiansToSineCosineTangent(Degrees,&Radians,&Sine,&Cosine,&Tangent);
    printf("For %lf degrees:\nRadians=%lf; Sine=%lf; Cosine=%lf; Tangent=%lf",Degrees,Radians,Sine,Cosine,Tangent);
}