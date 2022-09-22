#include "main.h"

/**
* string_toupper - changes all lowercase letters
* of a string to uppercase
* @r: input string
* Return: pointer
*/

char *string_toupper(char *r)
{
	int count = 0;

	while (*(r + count) != '\0')
	{
		if ((*(r + count) >= 97) && (*(r + count) <= 122))
			*(r + count) = *(r + count) - 32;
		count++;
	}
	return (r)
}
