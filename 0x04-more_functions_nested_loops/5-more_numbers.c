#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 */

void more_numbers(void)
{
	int times;

	for (times = 0; times < 10; times++)
	{
		char number;

		for (number = 0; number <= 14; number++)
		{
			_putchar(number);
		}

		_putchar('\n');
	}
	_putchar('\n');
}
