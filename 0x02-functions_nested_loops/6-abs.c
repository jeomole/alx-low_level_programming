#include "main.h"

/**
  * _abs - Computes the absolute value of an integer
  * @n: Number to check
  * Return: 0 or 1
  */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	else if (n == 0)
		n = 0;
	else
		n = n;
	return (n);
}
