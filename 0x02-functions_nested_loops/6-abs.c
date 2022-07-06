#include "main.h"

/**
* _abs - return absolute value of a number
* @n: passed parameter
* Return: absolute value of number
*/
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}