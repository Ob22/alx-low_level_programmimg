#include "main.h"

/**
* _atoi - function that convert a string to an integer
* @s: input
* Return: Always 0.
*/

i  nt _atoi(char *s)
{
	int b = 0, convert = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		convert = convert * 10 + s[b] - '0';
	}
	return (convert);
}
