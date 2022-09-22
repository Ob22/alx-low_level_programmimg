#include "main.h"

/**
* _strncpy - copy from one destination to another
* @dest: destination string
* @src: source string
* @n: value of src
*
* Return: value of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
