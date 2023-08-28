#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * using only the putchar function.
 *
 * Return: 0 (Execution successful)
*/

int main(void)
{
	int hex_numbers = '0';
	int hex_letters = 'a';

	for (hex_numbers = '0'; hex_numbers <= '9'; hex_numbers++)
	{
		putchar(hex_numbers);
	}

	for (hex_letters = 'a'; hex_letters <= 'f'; hex_letters++)
	{
		putchar(hex_letters);
	}

	putchar('\n');

	return (0);
}

