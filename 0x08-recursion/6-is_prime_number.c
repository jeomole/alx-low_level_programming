#include "main.h"

/**
  * is_prime - checks if number is prime
  * @a: number
  * @b: value to check if a is prime number with
  * Return: 0 if not prime, 1 if prime
  */
int is_prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (is_prime(a, b + 1));
}
/**
  * is_prime_number - returns 1 if the input integer is
  * a prime number, otherwise returns 0
  * @n: input integer
  * Return: value is 0 or 1
  */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
