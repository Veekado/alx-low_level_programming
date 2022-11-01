#include "main.h"
#include <string.h>


/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: the substring
 *
 * Return:number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int string = strspn(s, accept);

	return (string);
}
