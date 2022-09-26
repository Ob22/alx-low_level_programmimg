#include "main.h"

/**
* _strchr - locates a character in a string
* @c: character
* @s: string
* Return: first occurrence
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}
	else
		if (*s != c)
		{
			return ('\0');
		}
	return (s);
}
