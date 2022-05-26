#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * free_listint2 - frees a list and sets head to NULL
  * @head: double pointer to head node
  *
  * Return: value is void
  */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
