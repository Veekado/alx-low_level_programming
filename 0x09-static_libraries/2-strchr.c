#include "main.h"
#include <string.h>
/**
 * _strchr - searches for a character in a string
 * @s: string to be searched
 * @c: character to search
 *
 * Return:a pointer to the first occurrence of character or NULL
 */

char *_strchr(char *s, char c)
{
	char *search = strchr(s, c);

	return (search);
}
