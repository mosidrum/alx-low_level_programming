#include "main.h"
#include <stdio.h>

/**
* _isupper - checks the code
* @c: a passed in argument
* Return: 1 if c is uppercase and 0 otherwise
* Description: a function that checks uppercase alphabet
*/

int _isupper(int c)
{
	char i;
	int _isupper = 0;

	for (i = 'A'; i < 'Z'; i++)
	{
		if (i == c)
			_isupper = 1;
	}
	return (_isupper);
}
