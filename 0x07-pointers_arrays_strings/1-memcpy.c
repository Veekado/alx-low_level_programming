#include "main.h"
#include <string.h>


/**
 * _memcpy - copies from a source to destination
 * @dest: destination to copy to
 * @src: source to copy from
 *@n: number of bytes
 * Return: pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *copy = memcpy(dest, src, n);

	return (copy);
}
