#include "main.h"

/**
* _isalpha ->  checks for alphabetic character
* Return: 1 or 0 depending on the condition
* @c: a chracter argument
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
