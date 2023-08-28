#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 * using only the putchar function
 *
 * Return: 0 (Execution successful)
 */

int main(void)
{
	char reverse_alphabet = 'z';

	for (reverse_alphabet = 'z'; reverse_alphabet >= 'a'; reverse_alphabet--)
	{
		putchar(reverse_alphabet);
	}

	putchar('\n');

	return (0);
}

