#include "lists.h"

/**
  * list_len - returns the number of elements in a linked list_t list
  * @h: a linked list_t list
  *
  * Return: length of the list
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *hp = h;

	for (hp = h; hp != NULL; hp = hp->next)
		count++;

	return (count);
}
