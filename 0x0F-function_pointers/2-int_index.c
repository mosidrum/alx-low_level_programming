#include <stdio.h>
#include "function_pointers.h"

/**
* int_index- a function that searches for an integer.
* @size: is the number of elements in the array array
* @cmp: is a pointer to the function to be used to compare values
* Return: If no element matches, return -1
* Return: If size <= 0, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
			{
				return (i);
			}
	}

	return (-1);
}
