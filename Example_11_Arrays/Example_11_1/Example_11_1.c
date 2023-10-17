#include <stdio.h>
#include <stdlib.h>

int main(void) // Main : Execution starts here...
{
    // Declare variables - pre-populate the array
    int Ages[10] = {12,34,23,11,8,19,6,44,9,16};
    int i;

    // Loop from 0 to 9 inclusive
    for  ( i = 0 ; i < 10 ; i++ )
        printf ("Item %d contains value %d\n",i ,Ages[i]);

    // Exit the application
    return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main ()

{
   //We start by defining our array and its size
   float array[90];
   //define our i 
   int i 
   //Now generate the for loop so that we can fill out our array- where the element will equal its position 
   for (i = 0; i < 90; ++i)
   {
      array[i] = (float)i;
   }
   for (i = 0; i < 90; i++)
   {
      //Now we can store it 
      printf("array[%d] = %f\n",i,array[i]);
   }
   return 0;
}