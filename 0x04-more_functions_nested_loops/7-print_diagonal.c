#include "main.h"

/**
 *  print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 1; count <= n; count++)
		{
			int space;

			for (space = 1; space < count; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
