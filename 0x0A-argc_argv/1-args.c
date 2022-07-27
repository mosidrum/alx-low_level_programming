#include <stdio.h>

/**
*main -> This is  a program to prints its name
*@argc: argc parameters
*@argv: an array of commands listed
*Return: 0 for success
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
