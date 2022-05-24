#include "lists.h"

/**
  * free_list - frees a list_t list
  * @head: pointer to the first node of the list
  *
  * Return: value is void
  */
void free_list(list_t *head)
{
	list_t *temp;

	/**
	  * if head is not null, temp saves the head pointer,
	  * and makes head point to the next node on the list
	  * then temp is freed and the loop starts all over
	  * and the list is freed in this way, node after node
	  */
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
