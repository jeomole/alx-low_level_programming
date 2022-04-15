#include "main.h"

/**
  * print_line - Prints a straight line
  *
  * Return: Void
  */
void print_line(int n)
{
	for (; n >= 1; n--)
	{
		if (n <= 0)
			break;
		else
			_putchar('_');
		_putchar('\n');
	}
}
