#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *@n: is the integer
 *
 *Return: returns a positive value of last integer
 */



int print_last_digit(int n)
{
	int last_digit = n % 10
		if (n < 0)
		{
			last_digit = last_digit * -1;

			_putchar(last_digit + '48');
		}
	return (last_digit);
}
