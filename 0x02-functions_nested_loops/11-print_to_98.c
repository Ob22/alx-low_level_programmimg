#include <stdlib.h>

/**
* print_to_98 - Prints all natural numbers from n to 98,
* followwd by a new line, in order separated by a comma,
* followed by a space
* @n: The number to begin with
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%f\n", n);
	}
