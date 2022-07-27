#include <stdio.h>
#include <stdlib.h>

/**
*main -> This is  a program to prints its name
*@argc: argc parameters
*@argv: an array of commands listed
*Return: 0 for success
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	int result =0, num1, num2;

	if(argc != 3)
	{
		printf("%s\n", "ERROR");
		return (1);
	}
	num1 = atoi (argv[1]);
	num2 = atoi (argv[2]);

	result = num1 * num2;
}
