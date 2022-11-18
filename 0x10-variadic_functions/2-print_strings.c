#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that print strings followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *text;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		text = va_arg(string, char*);
		if (text == NULL)
			printf("(nil)");
		else
			printf("%s", text);
		if (separator == NULL)
			continue;
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
