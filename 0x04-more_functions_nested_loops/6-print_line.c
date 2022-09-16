#include "main.h"

/**
* print_line - function that draws a straight line in terminal
* using _
* @n: the number of _ to be printed
*/
void print_line(int n)
{
	int len;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (len = 1; len <= n; len++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
