#include "main.h"
#include <string.h>

/**
 * _strcat - joins two strings together
 * @dest: is a string
 * @src: is a string
 *
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char i, j;

	for (i = 0; dest[i] != '\0'; i++)
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
		dest[i + j] = '\0';
			return (dest);
}

