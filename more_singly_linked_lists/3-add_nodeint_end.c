#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: double pointer 
 * @n: variable
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ele;
	listint_t *node;

	if (head == NULL)
		return (NULL);
	ele = malloc(sizeof(listint_t));
	if (ele == NULL)
		return (NULL);
	ele->n = n;
	ele->next = NULL;
	if (*head == NULL)
	{
		*head = ele;
		return (ele);
	}
	node = *head;
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = ele;
	return (ele);
}
