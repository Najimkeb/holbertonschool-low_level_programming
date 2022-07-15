#include "lists.h"

/**
 * _strlen -  length of a string
 * @str: pointer
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int u;

	for (u = 0; str[u]; u++)
		;
	return (u);
}

/**
 * add_node_end - adds a new node at the end of a  list.
 * @head: double pointer
 * @str: pointer
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ele, *h;

	if (str == NULL)
		return (NULL);
	ele = malloc(sizeof(list_t));
	if (ele == NULL)
		return (NULL);
	ele->str = strdup(str);
	if (ele->str == NULL)
	{
		free(ele);
		return (NULL);
	}
	ele->len = _strlen(ele->str);
	ele->next = NULL;
	if (*head == NULL)
	{
		*head = ele;
		return (ele);
	}
	h = *head;
	while (h->next)
		h = h->next;
	h->next = ele;
	return (ele);
}
