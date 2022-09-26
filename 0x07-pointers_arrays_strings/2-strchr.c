#include "main.h"

/**
* _strchr - locates a character in a string
* @c: character
* @s: string
* Return: first occurrence
*/

char *_strchr(char *s, char c)
{
	char *a = s;

	while (*a != 0 && *a != c)
	{
		a++;
	}
	if (*a != c)
	{
		return (0);
	}
	return (a);
}
