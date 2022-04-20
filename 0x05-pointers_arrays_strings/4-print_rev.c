#include "main.h"

/**
  * print_rev - prints a string in reverse followed by new line
  * @s: string to print
  * Return: Void
  */
void print_rev(char *s)
{
	int i;

	i = (_strlen(s)) - 1;
	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(10);
}
