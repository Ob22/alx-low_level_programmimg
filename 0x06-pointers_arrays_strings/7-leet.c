#include "main.h"

/**
 * leet - encodes a string into 1337
 * @r: input string
 * Return: 0
 */

char *leet(char *r)
{
	int a, b;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O',
		't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (a = 0; r[a] != '\0'; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (r[a] == find[b])
			{
				r[a] = replacer[b / 2];
				b = 9;
			}
		}
	}
	return (r);
}
