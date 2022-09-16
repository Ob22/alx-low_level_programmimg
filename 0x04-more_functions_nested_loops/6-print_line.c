#include "main.h"

/**
* print_line - function that draws a straight line in terminal
* using _
* @n: the number of _ to be printed
*/
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
		{
		if (len == n -1)
			continue;
		_putchar('\n');
		}
	}
	_putchar('\n');
}


