#include "lists.h"
/**
  * _strlen - evaluates the length of a string
  * @str: string to be evaluated
  *
  * Return: the length of the string
  */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	for (; str[i]; i++)
		;
	return (i);
}
/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: pointer to the first node
  * @str: string data member of the new node
  *
  * Return: the address of the new element, or NULL on failure
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cursor, *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
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
