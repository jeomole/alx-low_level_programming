#include "main.h"

/**
  * print_rev - prints a string in reverse followed by new line
  * @s: string to print
  * Return: Void
  */
void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
		i++;

	j = i - 1;
	while (s[j] >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar(10);
}
