#include "main.h"

/**
 *swap_int - changes the value of an integer to one derefernced by the pointer
 *@a: integer
 *@b: interger
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

