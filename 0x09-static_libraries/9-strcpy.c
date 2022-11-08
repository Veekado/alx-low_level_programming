#include <string.h>
#include "main.h"

/**
 * _strcpy - copies a string to another string
 * @dest: target destination
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *f = strcpy(dest, src);

	return (f);
}
