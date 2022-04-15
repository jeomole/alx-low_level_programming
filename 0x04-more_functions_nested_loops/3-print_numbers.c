#include "main.h"

/**
  * print_numbers - Print numbers from 0 to 9
  * @n: Numbers from 0 to 9
  * Return: Void
  */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar(n);
		n++;
	}
	_putchar(10);
}
