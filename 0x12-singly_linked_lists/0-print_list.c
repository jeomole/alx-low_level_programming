#include "lists.h"
/**
  * print_list - prints all the elements of a list_t list
  * @h: A singly linked list
  *
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	const list_t *hp = h;
	size_t count = 0;

	for (hp = h; hp != NULL; hp = hp->next)
	{
		if (hp->str == NULL)
		printf("[0] (nil)\n");

		else if (hp->str != NULL)
		printf("[%u] %s\n", hp->len, hp->str);

		count++;
	}

	return (count);
}
