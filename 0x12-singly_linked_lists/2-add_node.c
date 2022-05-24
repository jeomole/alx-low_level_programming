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

	while (str[i] != '\0')
		i++;

	return (i);
}
/**
  * add_node - adds a node to the beginning of a list
  * @head: pointer to the first node
  * @str: string data member of the node
  *
  * Return: the address of the new element, or NULL on failure
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = *head;

	*head = new;

	return (*head);
}
