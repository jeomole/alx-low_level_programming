#include "main.h"

/**
  * print_numbers - Print numbers from 0 to 9
  * @c: Numbers from 0 to 9
  * Return: Void
  */
void print_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
