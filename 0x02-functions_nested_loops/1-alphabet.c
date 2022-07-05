#include "main.h"

/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line
* return: 0 always
*/

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');

}
