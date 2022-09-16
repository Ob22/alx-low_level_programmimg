#include <stdio>

/**
* main - prints the numbers from 1 to 100, but for multiples of three
* print Fizz instead of the number, for multiples of five print Buzz
* and for multiples of both five and three print FizzBuzz
*
* Return:Always 0 (Success)
*/
int main(void)
{
	int a;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";
	
	for (a = 1; a <= 100; a++)
	{
		if (a == 100)
			printf("%s", b);
		else if ((a % 3 == 0) && (a % 5 == 0)
				printf("%s ", fb);
				else if (a % 3 == 0)
				printf("%s ", f);
				else if (a % 5 == 0)
				printf("%s ", b);
				else
				printf("%d ", a);
				}
				printf("\n");
				return (0);
				}

