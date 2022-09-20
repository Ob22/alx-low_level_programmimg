#include "main.h"

/**
* _atoi - function that convert a string to an integer
* @s: input
* Return: Always 0.
*/

int _atoi(char *s)
{
	int a, b, c, leng, d, dig;

	a = 0;
	b = 0;
	c = 0;
	leng = 0;
	d = 0;
	dig = 0;

	while (s[leng] != '\0')
		leng++;

	while (a < leng && d == 0)
	{
		if (s[a] == '-')
			b++;

		if (s[a] >= '0' && s[a] <= '9')
		{
			dig = s[a] - '0';
			if (b % 2)
				dig = -dig;
			c = c * 10 + dig;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
		}
		a++;
	}
	if (d == 0)
		return (0);

	return (0);
}
