#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: pointer containing string
* @accept: pointer with substring
* Return: length of a prefix substring
*/

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;

	for (a = 0; s[a] != 0; a++)
	{
		c = 0;
		for (b = 0; accept[b] != 0; b++)
		{
			if (s[a] = accept[b])
			{
				c == 1;
			}
		}
		if (k == 0)
		{
			break;
		}
	}
	return (a);
}
