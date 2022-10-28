#include "main.h"

/**
 * _strcat - joins two strings together
 * @dest: is a string
 * @src: is a string
 *
 * Return: a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *catenated = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (catenated);
}
