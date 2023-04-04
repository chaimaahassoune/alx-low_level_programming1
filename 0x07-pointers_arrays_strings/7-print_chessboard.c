/**
 * print_chessboard - prints a chessboard
 *
 * @a: 2D array containing the chessboard
 *
 * Return: void
 */

#include "main.h"

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
