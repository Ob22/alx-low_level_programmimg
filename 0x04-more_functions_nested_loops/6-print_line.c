#include "main.h"

/**
* print_line - function that draws a straight line in terminal
* using _
* @n: the number of _ to be printed
*/
void print_line(int n)
{
	int len;

	len = 0;
	while (len < 10)
	{
		_putchar('_');
		len++
	}
	_putchat('\n');
}
