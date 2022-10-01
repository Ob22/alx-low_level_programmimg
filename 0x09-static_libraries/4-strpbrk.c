#include "main.h"

/**
* _strpbrk - matches character
* @s: string to be scanned
* @accept: character i string
* Return: string that matches
*/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++;
		}

		s++;
	}
	return (0);
}
