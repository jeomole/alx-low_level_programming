#include "main.h"

/**
  * print_square - Print hash figure equal times
  * vertically and horizontally
  * @size - number of times to print hash
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
