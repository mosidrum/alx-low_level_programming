#include <stdio.h>

/**
*main -> This is  a program to prints its name
*@argc: argc parameters
*@argv: an array of commands listed
*Return: 0 for success
*/

int main(argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return(0);
}
