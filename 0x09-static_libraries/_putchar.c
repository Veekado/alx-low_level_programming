#include <unistd.h>

/**
*_putchar - writes the character c to std out
*@c: the character to print
* Return: On success returns 1
* on error, returns -1, an error is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, -1));
}

