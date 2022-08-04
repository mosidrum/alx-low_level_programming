#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints a name
* @name: name to print
* @f: funtion pointer passed
* Return: no return
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
