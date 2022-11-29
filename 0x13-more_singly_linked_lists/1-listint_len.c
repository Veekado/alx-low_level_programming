#include "lists.h"

/**
 * listint_len - prints a list
 * @h: the list
 *
 * Return: number of nodes in the lost
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *list = h;
	size_t nodecount = 0;

	while (list)
	{
		nodecount++;
		list = list->next;
	}

	return (nodecount);
}
