#include "main.h"

/**
* string_toupper - changes all lowercase letters
* of a string to uppercase
* @r: input string
* Return: pointer
*/

char *string_toupper(char *r)
{
	int a;

	for (a = 0; r[a] != '\0'; a++)
	{
		if (r[a] >= 'a' && r[a] <= 'z')
			r[a] = r[a] - 32;
	}
	return (r);
}
