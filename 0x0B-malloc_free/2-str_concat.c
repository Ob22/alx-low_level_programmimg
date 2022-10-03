#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: input string 1
* @s2: input string 2
* Return: pointer to newly allocated space
in memory with both strings or NULL
*/

char *str_concat(char *s1, char *s2)
{
	char *pstr;
	unsigned int len1, len2, size, a, b;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
                s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != 0)
		len2++;
	size = len1 + len2;
	pstr = malloc((sizeof(char) * size) + 1);
	if (pstr == NULL)
		return (NULL);
	a = 0;
	while (a < len1)
	{
		pstr[a] = s1[a];
		a++;
	}
	b = 0;
	while (a <= size)
	{
		pstr[a] = s2[b];
		a++;
		b++;
	}
	return (pstr);
}
