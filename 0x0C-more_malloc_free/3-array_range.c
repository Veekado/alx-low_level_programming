#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to array or NULL if failed
 */
int *array_range(int min, int max)
{
	int *arr, i, n = 0, initial = min;

	if (min > max)
		return (NULL);

	while (initial <= max)
	{
		n++;
		initial++;
	}

	arr = malloc(n * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)

	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
