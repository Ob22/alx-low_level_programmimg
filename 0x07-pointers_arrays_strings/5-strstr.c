#include "main.h"

/**
* _strstr - locates a substring
* @haystack: string
* @needle: substring
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *st1, *st2;

	while (*haystack != '\0')
	{
		st1 = haystack;
		st2 = neddle;

		while (*haystack != '\0' && *st2 != '\0' && *haystack == *st2)
		{
			haystack++;
			st2++;
		}
		if (*st2 == '\0')
			return (st1);
		haystack = st1 + 1;
	}
	return (0);
}
