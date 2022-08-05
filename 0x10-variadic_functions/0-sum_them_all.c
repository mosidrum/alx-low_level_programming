#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - functions that adds all numbers passed
* @n: passed parameter
* Return: 0 if n == 0
*/

int sum_them_all(const unsigned int n, ...)
{
	
	va_list ap;

	va_start(ap, n);

	int i = 0, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}
