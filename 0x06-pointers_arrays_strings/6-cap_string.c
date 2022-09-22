#include "main.h"

/**
* cap_string - capitalized all words of a string
* @r: input string
* Return: caps of words
*/

char *cap_string(char *r)
{
	int a, b;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"', '(', ')',
		' ', '{', '}', '\n', '\t'};

	for (a = 0; r[a] != '\0'; a++)
	{
		if (r[a] >= 'a' && r[a] <= 'z')
		{
			r[a] = r[a] - cap;
		}
		cap = 0;
		for (b = 0; b <= 12; b++)
		{
			if (r[a] == separators[b])
			{
				b = 12;
				cap = 32;
			}
		}
	}
	return (r);
}
