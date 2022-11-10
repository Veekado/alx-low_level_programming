#include "main.h"

/**
*malloc_checked - a function that allocates memory using malloc
*@b: an unsigned input integer
*
*Return: a pointer to allocated memory.
*/


void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}