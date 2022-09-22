#include "main.h"

/**
* _strcat - function that concatenates two strings
* @dest: destination string
* @src: source string
*
* Return: pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int leng, a;

	while (dest[leng])
		leng++;
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[leng] = src[a];
		leng += 1;
	}
	dest[a] = '\0';
	return (dest);
}
