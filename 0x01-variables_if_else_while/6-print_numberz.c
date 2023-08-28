#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * using the putchar function only.
 *
 * Return: 0 (Execution successful)
 */

int main(void)
{
	int decimal = '0';

	for (decimal = '0'; decimal <= '9'; decimal++)
	{
		putchar(decimal);
	}

	putchar('\n');

	return (0);
}
