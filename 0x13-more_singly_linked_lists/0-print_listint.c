#include "lists.h"

/**
  * print_listint -  prints all the elements of a listint_t list
  * @h: pointer to head node
  *
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *hp = h;
	size_t count = 0;

	for (hp = h; hp != NULL; hp = hp->next)
	{
		printf("%d\n", hp->n);
		count++;
	}
	return (count);
}

