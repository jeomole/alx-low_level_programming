#include "lists.h"

/**
  * listint_len - returns the number of elemnts in a list
  * @h: pointer to head node
  *
  * Return: length of list
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
		count++;

	return (count);
}
