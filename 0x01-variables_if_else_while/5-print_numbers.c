#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Execution successful).
 */

int main(void)
{
	int numbers = 0;

	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%d", numbers);
	}

	putchar('\n');

	return (0);
}

