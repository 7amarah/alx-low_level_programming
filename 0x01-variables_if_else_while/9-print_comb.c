#include <stdio.h>

/**
 * main -  prints all possible combinations of single-digit numbers
 * Numbers must be separated by , followed by a space and in ascending order
 *
 *Return: 0 (Execution successful)
 */

int main(void)
{
	int decimal;

	for (decimal = '0'; decimal <= '9'; decimal++)
	{
		putchar(decimal);
		if (decimal != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

