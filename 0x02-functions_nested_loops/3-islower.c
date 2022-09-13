#include "main.h"

/**
* _islower - Checks for lowercase character
* @c: The character to check for
*
* Return: 1 if character is lowecase, 0 otherwise.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
