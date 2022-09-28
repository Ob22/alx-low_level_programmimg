#include "main.h"

/**
* factorial - factorial of a given number
* @n: pointer
* Return: main
*/

int factorial(int n)
{
	if (n == 0)

		return (1);

	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
