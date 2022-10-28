#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: a pointer to the array
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
}
