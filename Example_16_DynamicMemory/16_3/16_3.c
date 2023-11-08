#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // Declare an integer array and an integer pointer
    int *pData;

    //User Defined Size
    int ArrayItems, i=0;
    printf("\nPlease input the number of items in the array");
    scanf("%d",&ArrayItems);
    // Using calloc (same approach malloc)
    pData = calloc ( ArrayItems , sizeof (int));


    if ( pData == NULL)
    {
        printf ("\nMemory could not be allocated - terminating");
        return -1;  // Use minus one as we did not exit sucesfully
    }

     // We have our  memory, make use of it here!
  
   //Now generate the for loop so that we can fill out our array- where the element will equal its position 
   for (i = 0; i <= ArrayItems; i++)
   {
      pData[i] = &i ;
   }
   for (i = 0; i<= ArrayItems; i++)
   {
      //Now we print 
      printf("pData[%d] = %d\n",i,*pData);
   }
 
    // Free up the allocated memoey
    free (pData);

    return 0;   // Exit sucesfully
}