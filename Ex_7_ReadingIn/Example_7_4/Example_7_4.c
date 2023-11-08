#include <stdio.h>
#include <stdlib.h>

int main ()
{
char Name[50];

//Ask for the name
printf("Please enter your name");

//Read using scanf and %s to store as a string
scanf("%s",Name);

//Now display the name
printf("Hello %s\n",Name);

//scanf doesnt understand spaces we will have to use another function

//Ask for the name AGAIN and use a New variable name for the char
//CODE: char str[300];
//Ask for the name again
//CODE: printf("Please enter your name again");
//Now using gets so it will understand the space and output the full name

//The function gets() finds errors so instead we use fgets (variable,character_length,stdin)
//CODE: fgets(str,300,stdin);

//Now print the name
//CODE: printf("Your fullname is %s\n",str);
//for some reason the code commands run an error where it doesnt let me input anything for my new string
return 0;
}