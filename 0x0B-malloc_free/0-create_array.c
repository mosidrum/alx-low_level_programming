#include <main.h>

/**
* create_array -> creates array
* @size: size of an array to be created
* @c: charater an array is initialized with
* Return: a pointer to an array
*/

char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (size == 0)
		return(NULL)
	
	s = malloc(size * sizeof(char));
	if (s = NULL)
		return (NULL)
}