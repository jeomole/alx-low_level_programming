#include "main.h"

/**
  * print_alphabet_x10 - Entry point
  * 
  * Prints the alphabets in lowercase 10 times
  * Return: Returns 0
  */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
		i++;
	}
}
