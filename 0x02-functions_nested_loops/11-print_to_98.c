#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - Print natural numbers from to 98
  * @n: Number to start from
  * Return: Returns 0 or 1
  */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	printf("\n");
}
