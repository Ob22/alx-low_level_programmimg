#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @c: char type
* @size: unsigned int type
*
* Return: pointer to array created
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < size)
	{
		s[a] = c;
		a++;
	}
	s[a] = '\0';
	return (s);
}
