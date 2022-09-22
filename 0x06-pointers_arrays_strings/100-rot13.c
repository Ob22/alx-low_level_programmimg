#include "main.h"

/**
* rot13 - encodes a string using rot13
* @r: input string
* Return: Always 0
*/

char *rot13(char *r)
{
	int b, rot_c = 13, a = 0;
	char toswap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o',
		'C', 'P', 'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R',
		'e', 'r', 'F', 'S', 'f', 's', 'G', 'T', 'g', 't',
		'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v', 'J', 'W',
		'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y',
		'M', 'Z', 'm', 'z'};

	while (r[a] != '\0')
	{
		for (b = 0; b <= 52; b++)
		{
			if (r[a] == toswap[b])
			{
				r[a] = r[a] + rot_c;
				b = 52;
			}
		rot_c = rot_c * -1;
		break;
		}
		a++;
	}
	return (r);
}
