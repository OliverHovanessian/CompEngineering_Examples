#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   	int age;  			// Declare variable but no need to initialise since now we read it and then test
    
    do
    {
        printf ("\nPlease enter your age");
        scanf("%d", &age);
        printf ("You are %d years old\n", age);    
        if ( (age>18) && (age<21) )
        {
            printf("You have come of age\n");
        }
        // Code  now goes back and repeats the test with the value of age just entered
    }
   while(age !=0);
   
    return 0;	// Exit code
    //Ex4 - modify ex9.2 so that instead we are using a do-while loop 
    //note how now when age = 0 it now displays "You are zero years old" and then the function ends
}