#include "function_pointers.h"

/**
*print_name - a function that prints name
*@name: name to be printed
*@f: a pointer to a function
*Return: name
*/

void print_name(char *name, void (*f)(char *))

	{
		if (name == NULL)

			return;

		f(name);
	}
