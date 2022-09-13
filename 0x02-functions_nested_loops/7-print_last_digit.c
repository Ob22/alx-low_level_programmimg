#include "main.h"

/**
* print_last_digit - Prints the last digit of a number
* @i: The number to print it's last digit
*
* Return: The value of the last digit.
*/
int print_last_digit(int i)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
