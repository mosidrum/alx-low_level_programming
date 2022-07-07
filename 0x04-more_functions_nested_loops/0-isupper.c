#include <stdio.h>
#include "main.h"

/** _isupper - checks the code
*@c -  a passed in argument 
* Return: _isupper is returned
* Description: This program checks for upper or lower case alphabet 
*/

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
