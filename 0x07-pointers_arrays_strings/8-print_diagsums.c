#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers
* @a: 2d array
* @size: number
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int b;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	a = 0;
	while (b < size)
	{
		sum1 = sum1 + *(a + b * size + i);
		sum2 = sum2 + *(a + b * size + size - i - 1);
		b++;
	}
	printf("%b, %b\n", sum1, sum2);
}

