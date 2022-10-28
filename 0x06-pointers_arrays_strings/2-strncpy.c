#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: is a string
 * @src: is also a string
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *copy = strcpy(dest, src ,n);

	return (copy);
}
