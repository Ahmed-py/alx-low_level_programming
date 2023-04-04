#include "main.h"

/**
 * print_chessboard - PRINTS CHessboard
 * @a: Input pointer/S/.
 * Return: No return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int I, M = 0;

	for (I = 0; I < 64; I++)
	{
		if (I % 8 == 0 && I != 0)
		{
			M = I;
			_putchar('\n');
		}
		_putchar(a[I / 8][I - M]);
	}
	_putchar('\n');
}
