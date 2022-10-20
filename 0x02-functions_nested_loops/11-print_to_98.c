#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints downwards or uwardsp to 98
 * @n: initial number to start printing from
 *
 * Return: returns void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
