#include "main.h"

/**
 * print_numbers - prints a number within a range
 *
 * Return: void
 */


void print_numbers(void)
{
	int z = 0;

	for (z = '0'; z <= '9'; z++)

	{
		if (z != '2' && z != '4')
			_putchar(z);
	}
		_putchar('\n');
}
