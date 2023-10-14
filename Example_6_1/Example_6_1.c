#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int  a, b;

    // Note: Order of a,b indicates the order in which operations are carried out on execution
    
    // Increment operators
    b = 3;
    printf("\n1: b equals %d",b);
    a = ++b;    // b is now 4, a is also 4
    printf("\n2: a equals %d and b equals %d",a,b);
    a = b++;    // a is 4, b is now 5, 
    printf("\n3: a equals %d and b equals %d",a,b);
    
    // Decrement operators (reset a back to 3)
    b = 3;
    a = b--;    // a is 3, b is now 2    
    printf("\n4: a equals %d and b equals %d",a,b);
    a = --b;    // b is now 1, a is also 1
    printf("\n5: a equals %d and b equals %d",a,b);
    
    return 0;	// Exit from main
}