#include <ctype.h>
#include "main.h"


/**
 * _isupper - checks for upper case letters
 * @c: is the character to be checked
 *
 * Return: 1 for uppercase else 0
 */

int _isupper(int c)
{
	int a = isupper(c);

	if (a == 0)

		return (0);

	else

		return (1);
}
