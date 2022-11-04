#include "main.h"

/**
 *factorial - finds the factorial of any number
 *@n: is the number whose factorial we want to find
 *
 *Return: an integer
 */

int factorial(int n)
{
	if (n < 0)

		return (-1);

	if (n == 0)

		return (1);

	return (n * factorial(n - 1));
}

