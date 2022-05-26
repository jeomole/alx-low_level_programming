#include "lists.h"

/**
  * pop_listint - deletes the first node of a listint_t list
  * @head: double pointer to the head node
  *
  * Return: the data of the deleted node, 0 if the list is empty
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

	return(n);
}
