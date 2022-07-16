#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: pointer 
 *
 * Return: number of elements in a linked  list
 */
size_t listint_len(const listint_t *h)
{
	size_t link = 0;

	while (h != NULL)
	{
		link++;
		h = h->next;
	}
	return (link);
}
