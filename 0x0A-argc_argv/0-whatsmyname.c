#include <stdio.h>

/**
*main -> This is  a program to prints its name
*@argc: argc parameters
*@argv: an array of commands listed
*Return: 0 for success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
