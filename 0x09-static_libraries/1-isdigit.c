#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks inputs for digits or numerals
 *@c: is the input to be checked
 *
 * Return:if c is a digit returns 1 otherwise 0
 */

int _isdigit(int c)
{
	int a = isdigit(c);

		if (a == 0)

			return (0);

		else
			return (1);
}
