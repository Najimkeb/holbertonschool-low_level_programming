#include "lists.h"

/**
 *dlistint_len - that hat returns the number of elements in a linked
 * @h: head
 * Return: The number of element in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
