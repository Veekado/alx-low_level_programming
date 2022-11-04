#include "main.h"

int sqroot(int j, int k);

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: the number
 *
 * Return: an integer(natural square root or -1)
 */
int _sqrt_recursion(int n)
{
	return (sqroot(1, n));
}

/**
 * sqroot - finds the square root of a number
 * @j:a number
 * @k: value obtained
 *
 * Return: natural square root or -1
 */
int sqroot(int j, int k)
{
	if (j * j == k)
		return (k);
	else if (j * j > k)
		return (-1);
	else
		return (sqroot(j + 1, k));
}
