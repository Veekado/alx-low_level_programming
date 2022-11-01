#include "main.h"
/**
 * _memcpy - copies from a source to destination
 * @dest: destination to copy to
 * @src: source to copy from
 *@n: number of bytes
 * Return: pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		src[k] = dest[k];
	}
	return (dest);
}

