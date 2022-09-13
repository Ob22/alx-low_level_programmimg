#include "main.h"

/**
* _islower - Checks for lowercase character
* @c: The charactet to check for
*
* Return: 1 if character is lowecase, otherwise 0.
*/
int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
