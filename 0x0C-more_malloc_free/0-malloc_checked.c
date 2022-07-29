#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - checking malloc
* @b: param b
* Return: returns p
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
