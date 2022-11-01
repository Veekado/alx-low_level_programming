#include "main.h"
#include <string.h>


/**
 * _memset - fills the first n bytes pointed to with s
 * @s:poiner to string
 * @b:character to b copied
 * @n: number of times to copy b
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return(s);
}
