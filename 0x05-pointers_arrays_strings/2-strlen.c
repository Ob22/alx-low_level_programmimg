#include "main.h"

/**
* _strlen - function that returns the length of a string
* @s: input
* Return: length of string
*/

int _strlen(char *s)
{
	int h = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[h++];
	}
	return (sum);
}
