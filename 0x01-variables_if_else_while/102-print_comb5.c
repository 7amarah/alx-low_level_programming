#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * The two numbers should be separated by a space
 *
 * The combination of numbers must be separated by comme, followed
 * by a space and they should be printed in ascending order.
 *
 * Return: 0 (Execution successful)
 */

int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 <= 98; number1++)
	{
		for (number2 = number1 + 1; number2 <= 99; number2++)
		{
			putchar((number1 / 10) + '0');
			putchar((number1 % 10) + '0');
			putchar(' ');
			putchar((number2 / 10) + '0');
			putchar((number2 % 10) + '0');

			if (number1 == 98 && number2 == 99)
			{
				continue;
			}

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
