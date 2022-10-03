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
	unsigned int a = 0;

	if (str == 0)
		return (0);
	while (s[a] != 0)
		a++;
	a++;
	pstr = malloc(sizeof(char) * i);
	for (a = 0; s[a] != 0; a++)
		pstr[a] = str[a];
	pstr[a] = 0;
	return (pstr);
}
