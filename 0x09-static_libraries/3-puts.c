#include "main.h"
/**
* _puts ->  function that prints a string, followed by a new line, to stdout.
* @str: the passed string
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
