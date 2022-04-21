#include "main.h"

/**
  * print_array - prints n number of elements of an array
  * @a: array of integers
  * @n: number of elements to print
  * Return: Value is void
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		printf("%d", *(a + i));
		else
		printf("%d, ", *(a + i));
	}
	_putchar(10);
}
