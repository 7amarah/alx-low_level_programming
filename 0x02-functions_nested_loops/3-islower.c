#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: character to check
 *
 * Return: 1 if c is lowercase; 0 otherwise
 */

int _islower(int c)
{
	int lowercase = 0;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (c == lowercase)
		{
			return (1);
		} else if (c != lowercase)
		{
			return (0);
		}
	}

	_putchar('\n');
	return (0);
}
