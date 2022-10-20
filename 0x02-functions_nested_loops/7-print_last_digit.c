#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *@n: is the integer
 *
 *Return: returns a positive value of last integer
 */



int print_last_digit(int n)
{
	int l = n % 10;

		if (l > 0)
		{

			_putchar(l + 48);
			return (l);
		}
		else
		{
			_putchar(-l + 48);
			return (l);
		}
}
