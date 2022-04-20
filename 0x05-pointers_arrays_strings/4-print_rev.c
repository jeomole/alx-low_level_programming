#include "main.h"

/**
  * print_rev - prints a string in reverse followed by new line
  * @s: string to print
  * Return: Void
  */
void print_rev(char *s)
{
	int i;

	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(10);
}
