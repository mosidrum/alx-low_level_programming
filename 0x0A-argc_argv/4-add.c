#include <stdio.h>
#include <stdlib.h>

/**
*main -> This is  a program to add
*@argc: argc parameters
*@argv: an array of commands listed
*Return: 0 for success
*/

int main(int argc, char *argv[])
{
	int result = 0, x, y, z, num;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (z = 1; z < argc; z++)
	{
		num = atoi(argv[z]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
