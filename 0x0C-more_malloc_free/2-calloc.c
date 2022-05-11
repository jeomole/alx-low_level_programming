#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array of chars
  * @nmemb: number of elements
  * @size: size of each element
  *
  * Return: Void, on success. 0, if nmemb or size is NULL
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb * size == 0)
	return (NULL);

	arr = malloc(nmemb * size);
	if (arr == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
