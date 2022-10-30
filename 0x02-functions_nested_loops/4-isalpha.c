#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase; 0 otherwise
 */

int _isalpha(int c)
{
	int alphabet;

	for ((alphabet = 'a') || (alphabet = 'A'); (alphabet <= 'z') ||
	(alphabet <= 'Z'); alphabet++)
	{
		if (c == alphabet)
		{
			return (1);
		} else if (c != alphabet)
		{
			return (0);
		}
	}

	_putchar('\n');

	return (0);
}
