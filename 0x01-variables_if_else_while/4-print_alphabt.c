#include <stdio.h>

/**
 * main - prints the alphabet except q and e in lowercase
 *
 * Return: Always 0 (Execution successful)
 */

int main(void)
{
	char lowercase = 'a';

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if ((lowercase != 'e') && (lowercase != 'q'))
		{
			putchar(lowercase);
		}
	}

	putchar('\n');

	return (0);
}

