#include "main.h"

/**
  * print_alphabet - Entry point
  *
  * Return: Returns 0
  */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
