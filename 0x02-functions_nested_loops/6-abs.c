#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: the integer's absolute value to return
 *
 * Return: 0 (Execution successful)
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}

	return (0);
}

