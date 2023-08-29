#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 *
 * Description: for multiples of three, Fizz is printed;
 * for multiples of 5, Buzz is printed;
 * for numbers which are multiples of both three and five, FizzBuzz is printed;
 * instead of the number
 *
 * Return: 0 (successful execution)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

