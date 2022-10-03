#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: pointer to string
* @s2: pointer to string
*
* Return: pointer to newly allocated memory which
* has s1, s2 and null byte
* NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, size, a, b;
	char *pstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	size = len1 + len2;
	pstr = malloc((sizeof(char) * size) + 1);
	if (pstr == NULL)
		return (NULL);
	a = 0;
	while (a < len1)
	{
		pstr[a] = s1[a];
		a++;
	}
	b = 0;
	while (a <= size)
	{
		pstr[a] = s2[b];
		a++;
		b++;
	}
	return (pstr);
}
