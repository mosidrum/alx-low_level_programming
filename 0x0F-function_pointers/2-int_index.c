#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function given as a
* parameter on each element of an array.
* @array: input integer array.
* @size: size of the array.
* @action: pointer to the function.
*
* Return: no return.
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

