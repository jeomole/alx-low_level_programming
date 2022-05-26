#include "lists.h"

/**
  * sum_listint - returns the sum of all the data (n)
  * @head: pointer to the first node of list
  *
  * Return: returns the sum of all the data (n)
  * 0, if the list is empty
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
