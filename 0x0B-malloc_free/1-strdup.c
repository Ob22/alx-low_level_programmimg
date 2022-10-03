#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - returns length of string
* @s: char type
*
* Return: length of string
*/

char *_strlen(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	{
	}
	return (b);
}

/**
* _strdup - function to return pointer to string
* @str: pointer to string array input
*
* Return: pointer to string created
*/

char *_strdup(char *str)
{
	char *ptr;
	int size;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	i = 0;
	while (i < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}

