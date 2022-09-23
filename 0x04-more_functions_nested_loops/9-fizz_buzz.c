#include <stdio.h>

/**
* main - prints numbers from 1 to 100, for multiples of three
* print Fizz instead of the number, for multiples of five print Buzz
* and for multiples of both five and three print FizzBuzz1
* Return:Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 2; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (num % 3 == 0)
	{
		printf(" Fizz");
	}
		else if (num % 5 == 0)
		{
			printf(" Buzz");
		}
		else
			printf(" %d", num);
	}
	printf("\n");
	return (0);
}
