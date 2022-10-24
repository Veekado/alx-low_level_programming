#include <string.h>
#include "main.h"

/**
 * print_rev - prints a reverse string
 * @s: a pointer to the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)

		_putchar(s[i]);
	_putchar('\n');
}
