#include "main.h"

/**
  * times_table - Prints times table
  * Return: Void
  */
void times_table(void)
{
	int a = 0;
	int b;
	int mult;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			mult = a * b;
			if (b == 0)
			{
				_putchar('0' + mult);
			}
			else if (mult < 10)
			{
				_putchar(' ');
				_putchar('0' + mult);
			}
			else
			{
				_putchar('0' + mult / 10);
				_putchar('0' + mult % 10);
			}
			if (b < 9)
			{
				_putchar(','):
				_putchar(' ');
			}
			b++;
		}
		_putchar(10);
		a++;
	}
}
