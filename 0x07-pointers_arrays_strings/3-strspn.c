#include "main.h"

/**
* _strspn - locates the length of a prefix substring
* @s: pointer containing string
* @accept: pointer with substring
* Return: length of a prefix substring
*/

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int count = 0;
	char *st1, *st2;

	st1 = s;
	st2 = accept;

	a = 0;
	while (st1[a] != '\0')
	{
		b = 0;
		while (st2[b] != '\0')
		{
			if (str2[b] == str1[a])
			{
			count++;
			break;
			}
			b++;
		}
		if (s[a] != accept[b])
		{
			break;
		}
		a++;
	}
	return (count);
}
