#include "main.h"

/**
* rev_string - function that reverses a string
* @s: string
* Return: reversed string
*/

void rev_string(char *s)
{
	char rev = s[0];
	int jcounter = 0;
	int a;

	while (s[jcounter] != '\0')
		jcounter++;

	for (a = 0; a < jcounter; a++)
	{
		jcounter--;
		rev = s[a];
		s[a] = s[jcounter];
		s[jcounter] = rev;
	}
}
