#include "main.h"

/**
  * reverse_array - reverse an array of integers
  * @a: array to be reversed
  * @n: number of elements in the array
  * Return: Value is void
  */
void reverse_array(int *a, int n)
{
	int index;
	int temp;
	int j;

	index = 0;
	while (index < n)
		index++;

	index--;

	j = 0;
	while (j <= index)
	{
		temp = *(a + index);
		*(a + index) = *(a + j);
		*(a + j) = temp;
		index--;
		j++;
	}
}
