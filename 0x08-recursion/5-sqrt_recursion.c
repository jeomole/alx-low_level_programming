#include "main.h"

/**
  * sqrt_nat - checks if the square root is a natural number
  * @a: square
  * @b: square root
  * Return: b if it is a natural number, else -1
  */
int sqrt_nat(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_nat(a, b + 1));
}

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number
  * Return: square root if natural, else -1
  */
int _sqrt_recursion(int n)
{
	return (sqrt_nat(n, 0));
}
