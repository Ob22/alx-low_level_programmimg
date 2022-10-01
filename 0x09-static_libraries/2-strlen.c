#include "main.h"

/**
* _strlen - length of string
* @s: value of s
*
* Return: always 0
*
*/

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
	count++;
	}

	return (count);
}
