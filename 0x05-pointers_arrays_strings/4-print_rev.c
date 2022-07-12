#include "main.h"
#include <string.h>
/**
* print_rev ->  function that prints a string, in reverse, followed by a new line.
* @s: the passed string
*/

void print_rev(char *s)
{
	int a, b;

	b = strlen(s);
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
}
