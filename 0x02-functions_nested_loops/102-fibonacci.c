#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 *
 * Return: 0
 */

int main(void)
{
	int counter;
	int count_to = 50;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long sum;

	for (counter = 0; counter < count_to ; counter++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;
	}
	if (counter == 49)
	{
		printf("\n");
	}
	else
	{
		printf(", ");
	}

	return (0);
}
