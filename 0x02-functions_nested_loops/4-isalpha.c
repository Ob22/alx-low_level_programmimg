#include "main.h"

/**
* _isalpha - Checks for alphabetic character
* @c: The character to be checked for
*
* Return: 1 if character is letter, lowercase or uppercase, otherwise 0.
*/
int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
