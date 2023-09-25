#include "main.h"

/**
 * print_chessboard - print
 * @a: action
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int hu, hm = 0;

	for (hu = 0; hu < 64; hu++)
	{
		if (hu % 8 == 0 && hu != 0)
		{
			hm = hu;
			_putchar('\n');
		}
		_putchar(a[hu / 8][hu - hm]);
	}
	_putchar('\n');
}
