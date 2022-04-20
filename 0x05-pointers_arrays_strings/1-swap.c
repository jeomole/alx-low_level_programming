#include "main.h"

/**
  * swap_int - swaps the values of two integers
  * @a: pointer to variable to be swapped
  * @b: pointer to variable to be swapped with
  * Return: Void
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
