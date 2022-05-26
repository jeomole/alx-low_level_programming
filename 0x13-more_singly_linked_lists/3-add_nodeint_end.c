#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: address of head node;
  * @n: data of new node
  *
  * Return: address of new element, NULL on failure
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cursor, *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	for (cursor = *head; cursor->next != NULL; cursor = cursor->next)
		;
	cursor->next = new;

	return (new);
}
