#include "main.h"

/**
* _memcpy - copies memory area
* @n: value of byte
* @src: source memory area
* @dest: destination memory area
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}
	return (dest);
}
