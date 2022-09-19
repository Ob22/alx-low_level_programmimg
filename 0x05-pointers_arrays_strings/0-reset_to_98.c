#include "main.h"

/**
* reset_to_98 - function that takes a pointer to an int value
* and updates the value it points to to 98
* @n: value pointer is assigned to
*/

void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 98;
	p = &*n;

	_putchar("value of 'p': %p\n", p);
	_putchar("value of '*n': %d\n", n);
	*p = 98;

	return (0);
}
