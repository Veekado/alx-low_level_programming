#include "main.h"

/**
 * create_array - creates an array of characters and initialisea it
 * with a specific char
 *
 * @size: size of the array
 * @c: character to initialise the array with
 *
 * Return: NULL if the size is zero, or if the pointer fails
 * else it returns a pointer to the array
 */



char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}

