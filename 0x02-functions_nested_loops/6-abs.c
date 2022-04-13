#include "main.h"

/**
  * _abs - Computes the absolute value of an integer
  * @n: Number to check
  * Return: 0 or 1
  */
int _abs(int n)
{
	int r;

	if (n < 0)
		_putchar((-1) * n);
	else
		_putchar(n);
	return (0);
}
