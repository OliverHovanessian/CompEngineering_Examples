#include <stdio.h>
#include<stdlib.h>

int main ()
{
//Assign variables A,B and R which will be the output
int A,B,R;
//
A = 60;
B = 13;

//Go through each bitwise operation and print 
R = A & B ;
printf("\n1) AND OPERATION R = %d",R);

R = A || B;
printf("\n2) OR OPERATION R = %d",R);

R=A^B;
printf("\n3) XOR OPERATION R = %d",R);

R=~A;
printf("\n4) BIT FLIP R = %d",R);

R= A << 2;
printf("\n5) BIT SHIFT LEFT R = %d",R);

R= A >> 2 ;
 printf("\n6) BIT SHIFT RIGHT R = %d",R);

return 0 ;
}