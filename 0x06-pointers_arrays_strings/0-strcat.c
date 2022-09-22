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
	int a = 0, leng = 0;;

	while (*(dest + leng) != '\0')
	{
		leng++;
	}

	for (a = 0; *(src + a) != 0; a++)
	{
		*(dest + leng) = *(src + a);
		leng++;
	}
	*(dest)= '\0';
	return (dest);
}
