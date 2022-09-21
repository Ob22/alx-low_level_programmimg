#include "main.h"
#include <stdio.h"

/**
* _strcat - function that concatenates two strings
* @dest: destination string
* @src: source string
*
* Return: pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int aleng = 0, b;

	while (dest[aleng])
	{
		aleng++;
	}

	for (b = 0; src[b] != 0; b++)
	{
		dest[aleng] = src[b];
		aleng++;
	}
	dest[aleng] = '\0';
	return (dest);
}
