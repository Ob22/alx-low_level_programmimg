#include "main.h"

/**
* _puts - function that prints a string, followed by a new line
* @str: string
* Return: print string
*/

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar("%s\n", str[a]);
	}
	_putchar('\n');
}
