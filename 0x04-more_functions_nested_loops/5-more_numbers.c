#include "main.h"

/**
  * more_numbers - Prints 0 to 14 ten times
  * @freq: Number of times to be printed
  * @num: Number
  * Return: Void
  */
void more_numbers(void)
{
	int freq;
	int num;

	freq = 0;
	while (freq <= 9)
	{
		num = 0
		while (num <= 14)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0')
			}
			else
			{
			_putchar(num);
			}
			num++;
		}
		_putchar(10)
		freq++;
	}
}
