#include <stdio.h>
#include "function_pointers.h"

/**
* int_index- a function that searches for an integer.
* @size: is the number of elements in the array array
* @cmp: is a pointer to the function to be used to compare values
* @array: input integer array.
* Return: If no element matches, return -1 and If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

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

