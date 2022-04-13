#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @n - Integer to be used as argument for the function
  * Return: Returns the value of the last digit
  */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = (-1) * last;
	}

	_putchar(last + '0');
	return (last);
}
