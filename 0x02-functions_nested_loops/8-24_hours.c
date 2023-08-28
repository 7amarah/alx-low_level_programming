#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 *
 * Return: 0 (Execution succesful)
 */

void jack_bauer(void)
{
	int hours = 0;

	for (hours = 0; hours < 24; hours++)
	{
		int minutes = 0;

		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (minutes / 10));
			_putchar('0' + (minutes % 10));
			_putchar('\n');
		}
	}
}
