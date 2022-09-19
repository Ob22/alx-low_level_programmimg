#include <stdio.h>
#include "main.h"

/**
* print_array - function that prints n elements of an array of integers
* @a: array name
* @n: number of elements of the array to be printed
* Return: print elements of array
*/

void print_array(int *a, int n)
{
	int a;

	for (a = 0; a < (n - 1); a++)
		printf("%d, ", a[a]);
	if (a == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
