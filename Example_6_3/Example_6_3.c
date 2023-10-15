#include <stdio.h>
#include <stdlib.h>

int main () 
{
//Assign variables A,B and R which will be the output
unsigned int A,B,R;
//
A = 60;
B = 13;

//Go through each bitwise operation and print 
R = A & B ;
printf("\n1) AND OPERATION R = 0x%X",R);

R = A || B;
printf("\n2) OR OPERATION R = 0x%X",R);

R=A^B;
printf("\n3) XOR OPERATION R = 0x%X",R);

R=~A;
printf("\n4) BIT FLIP R = 0x%X",R);

R= A << 2;
printf("\n5) BIT SHIFT LEFT R = 0x%X",R);

R= A >> 2 ;
 printf("\n6) BIT SHIFT RIGHT R = 0x%X",R);

return 0 ;
}