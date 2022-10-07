#include "main.h"

/**
* _memset - copy char
* @s: string
* @b: input
* @n: bytes
* Return: string
*
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
* _calloc -allocated memoria for nmeb elemn de zise bytes
* @nmemb: number of element in the array
* @size: bytes for each position in array
* Return: pointer void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);

}
