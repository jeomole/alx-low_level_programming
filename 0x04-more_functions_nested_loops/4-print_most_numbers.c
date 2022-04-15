#include "main.h"

/**
  * print_most_numbers - Prints numbers from 0 to 9 excluding 2 and 4
  * @c: Numbers, starting from 0
  * Return: Void
  */
void print_most_numbers(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar(10);
}
