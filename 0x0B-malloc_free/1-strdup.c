#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to a newly
* allocated space in memory
* @str: input string
* Return: pointer to duplicate string or NULL if failure
*/

char *_strdup(char *str)
{
	char *pstr;
	unsigned int len, a;

	if (str == 0)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	pstr = malloc(sizeof(char) * (len + a));
	if (pstr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < len; a++)
	{
		pstr[a] = str[a];
	}
	pstr[len] = '\0';
	return (pstr);
}
