#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: the size of the triangle
 *
 * Description: If size is 0 or less, the function prints only a new line
 * the character # is used to print the triangle
 */

void print_triangle(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				if (col < (size - row) - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}

