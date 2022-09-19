#include "main.h"

/**
* print_rev - function that prints a string, in reverse
* @s: string
* Return: reverse string
*/

void print_rev(char *s)
{
	int jcounter = 0;
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		jcounter++;
	}

	for (b = (jcounter - 1); b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
