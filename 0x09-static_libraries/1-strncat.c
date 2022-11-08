#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 *
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclenght = 0, i = 0;
	char *fused = dest, *start = src;

	while (*src)
	{
		srclenght++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclenght)
		n = srclenght;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (fused);
}
