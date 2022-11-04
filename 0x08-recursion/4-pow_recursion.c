#include "main.h"

/**
 * _pow_recursion - prints the valie of x raised to power y
 * @x: base value
 * @y: power
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)

		return (1);

	if (y < 0)

		return (-1);

	if (y == 1)

		return (x);

	return (_pow_recursion(x, y - 1) * x);
}

