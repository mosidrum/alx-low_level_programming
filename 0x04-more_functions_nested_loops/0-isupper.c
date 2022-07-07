#include <stdio.h>
#include "main.h"

int _isupper(int c)
{
	char i;
	int _isupper = 0;

	for (i = 'A'; i < 'Z'; i++)
	{
		if (i == c)
		{
			_isupper = 1;
		}
	}
	return (_isupper);
}
