#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: 2d array
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	ink x, y;

	x = 0;
	while (a < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_ putchar('\n');
		x++;
	}
}
