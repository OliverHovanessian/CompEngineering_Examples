#include <stdio.h>
#include <stdlib.h>

int main ()
{
char str[300];
printf("Please enter your name");
fgets(str,300,stdin);
printf("Your fullname is %s\n",str);
return 0;
}