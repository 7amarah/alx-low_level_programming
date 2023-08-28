#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: the number the multiplication will go up to
 *
 * Return: prints nothing if n is greater 15 or less than 0
 */

void print_times_table(int n)
{
	int row;
	int column;
	int product;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');

			for (column = 1; column <= n; column++)
			{
				_putchar(',');
				_putchar(' ');

				product = row * column;

				if (column <= 99)
				{
					_putchar(' ');
				}
				else if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar((((product / 10) % 10) + '0'));
				}
				else if (product >= 10 && product <= 99)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
