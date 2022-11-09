#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space that contains a copy
 * of a string
 * @str: the string
 *
 * Return: NULL if string is NULL or if not enough space available and
 * a pointer to the new duplicate otherwise
 */
char *_strdup(char *str)
{
	int len, i;
	char *k;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	k = malloc((len + 1) * sizeof(char));

	if (k == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		k[i] = str[i];

	k[len] = '\0';

	return (k);
}
