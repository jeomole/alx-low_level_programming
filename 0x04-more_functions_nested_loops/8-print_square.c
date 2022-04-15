#include "main.h"

/**
  * print_square - draws a square
  * @size: Number of rows and columns
  *
  * Return: Void
  */
void print_square(int size)
{
	int j;
	int i;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
