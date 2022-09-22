#include "main.h"

/**
* reverse_array - function that reverses content of an array
* @a: array
* @n: element of the array
* Return: none
*/

void reverse_array(int *a, int n)
{
	int b, c, rev;

	for (b = 0; b < n - 1; b++)
	{
		for (c = b + 1; c > 0; c++)
		{
			rev = *(a + c);
			*(a + c) = *(a + (c - 1));
			*(a + (c - 1)) = rev;
		}
	}
}
