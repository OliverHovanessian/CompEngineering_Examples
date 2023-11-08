#include <stdio.h>
#include <stdlib.h>

//First a function to populate the integer array
void PopulateTheArray ( int Size, int ArrayData[])//Note that an array without specified size in [] is a pointer
{
int i; //Our loop variable

for ( i = 0 ; i < Size ; i++)
{
    ArrayData[i] = 2*i + 1 ; //Function to populate our array
}
}

//now a function so we can display our array
void DisplayTheArray ( int Size, int ArrayData[])
{
    int i; 

    for ( i = 0 ; i < Size ; i++)
    {
        printf("Item %d of the array contains %d\n",i,ArrayData[i]);
    }
}

//Now our main executable
int main (void)
{
    int Data[10]; //Here we specify our array and its size

    //Now we want to pass our array data to our populating and displaying functions
    //The name of the array is the base address
    //Therefore this is the same as passing &Data[0]

    PopulateTheArray(10,Data);
    DisplayTheArray(10,Data);

return(0);  //Exit
}