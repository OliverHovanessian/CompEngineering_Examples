#include <stdio.h>
#include <stdlib.h>

int main ()
{
   //We start by defining our array and its size
   float array[90];
   //define our i 
   int i = 0 ;
   //Now generate the for loop so that we can fill out our array- where the element will equal its position 
   for (i = 0; i < 90; i++)
   {
      array[i] = (float)i;
   }
   for (i = 0; i < 90;+i++)
   {
      //Now we can store it 
      printf("array[%d] = %.0f\n",i,array[i]);
   }
   return 0;
}

//ANOTHER WAY:
//int main()
//{
  // float array[90];
   //for (int i = 0; i < 90; ++i)
   //{
     // array[i] = (float)i;
      //printf("array[%d]=%.0f\n",i,array[i]);
   //}
   //return 0;
//}