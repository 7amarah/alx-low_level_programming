#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * using only the putchar function
 *
 * Numbers must be separated by , followed by a space.
 *
 *Return: 0 (Execusion successful)
 */

int main(void)
{
	int octal1, octal2;

	for (octal1 = '0'; octal1 <= '9'; octal1++)
	{
		for (octal2 = (octal1 + 1); octal2 <= '9'; octal2++)
		{
			putchar(octal1);
			putchar(octal2);

			if ((octal1 != '8') || (octal2 != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

