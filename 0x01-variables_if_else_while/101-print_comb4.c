#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits,
 * using only the putchar function.
 *
 * Numbers must be separated by , followed by a space.
 *
 * Return: 0 (Executon successful)
 */

int main(void)
{
	int octal1, octal2, octal3;

	for (octal1 = '0'; octal1 <= '9'; octal1++)
	{
		for (octal2 = (octal1 + 1); octal2 <= '9'; octal2++)
		{
			for (octal3 = (octal2 + 1); octal3 <= '9'; octal3++)
			{
				putchar(octal1);
				putchar(octal2);
				putchar(octal3);

				if ((octal1 != '7') || (octal2 != '8')
				|| (octal3 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
