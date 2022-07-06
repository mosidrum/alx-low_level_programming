#include "main.h"

/**
* print_sign ->  checks for alphabetic character
* Return: 1, 0, or -1 depending on the condition
* @n: a chracter argument
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
