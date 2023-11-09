#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//First a function to populate the integer array
void PopulateTheArray ( int Size, float ArrayData[])//Note that an array without specified size in [] is a pointer
{
int i; //Our loop variable

for ( i = 0 ; i < Size ; i++)
{
    ArrayData[i] = (float)M_PI*i /180 ; //Function to populate our array
}
}

//now a function so we can display our array
void DisplayTheArray ( int Size, float ArrayData[])
{
    int i; 

    for ( i = 0 ; i < Size ; i++)
    {
        printf("Item %d of the array contains %.3f\n",i,ArrayData[i]);
    }
}

void GeneratingTheFile ( int Size, int filename, float ArrayData[])
{
    FILE *fInput, *fOutput ; 

    int i ;
    float d;
    fOutput = fopen (&filename, "w");
    // Check we were able to open the file
    if ( fOutput == NULL)
    {
        printf ("\nthe file could not be opened for writing, exiting");
        return -1;
    }
   //Now to fill the file
    for ( i = 0 ; i < Size  ; i++)
    {
        fprintf("Item %d of the array contains %.3f\n",i,ArrayData[i]);
    }
     //Now close the file
     fclose (fOutput);

     //Now try to open our file so that we can now read it

     fInput = fopen (&filename,"r");
     //check if file is opened
    if ( fInput == NULL)
    {
        printf ("\nthe file could not be opened for reading!");
        return -1;
    }

    //Now read for all values written 
       for ( i = 1 ; i <= Size ; i++)
    {
        fscanf (fInput, "%.3f", &d);
        printf ("Value read from file %f\n",d);
    }

    //Finally close the file
    fclose(fInput);
    return(0);
}

//Now our main executable
int main (void)
{
    float *pData; //Now we are making a pointer as we will be using a user input for the size of the array therefore requiring dynamic memory
    int iSizeForArray; //User defined array size

    printf("\nPlease enter the size of the array to dynamically allocate");
    scanf("%d",&iSizeForArray);

    //Now what if the array is far too big, and user doesnt have the space ! We must use calloc to check!
    pData = calloc (iSizeForArray , sizeof(float));

    //Now memory check
    if (pData == NULL)
    {
        printf("Sorry you don't have sufficient memory for this array size- bye !");
        return -1;
    }

    //Now we want to pass our array data and its user defined size to our populating and displaying functions
    //The name of the array is the base address
    //Therefore this is the same as passing &Data[0]

    PopulateTheArray(iSizeForArray,pData);
    DisplayTheArray(iSizeForArray,pData);

    int filename ; 
    printf("\nPlease enter a filename");
    scanf("%d",&filename);
    GeneratingTheFile(filename,pData,iSizeForArray);

    //Now release our pointer to release the memory and stop memory leakage
    free (pData);

return(0);  //Exit
}