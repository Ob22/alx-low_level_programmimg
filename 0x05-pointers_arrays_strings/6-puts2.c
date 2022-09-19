#include "main.h"

/**
* puts2 - function that prints every other character of a string
* starting with the first character
* @str: string
* Return: every other character of string
*/

void puts2(char *str)
{
	int a = 0;

	for (; str[a] != '\0'; a++)
	{
		if ((a % 2 == 0))
			_putchar(str[a]);
		else
			continue;
	}
	_putchar('\n');
}
