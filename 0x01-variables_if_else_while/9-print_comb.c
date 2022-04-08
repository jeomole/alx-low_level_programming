#include <stdio.h>

/**
  * main - Entry point
  *
  * Print all possible combinations of single-digit numbers,
  * in ascending order and delimited with a comma and space
  * Return: 0
  */
int main(void)
{
	int sing_digit;

	sing_digit = '0';
	while (sing_digit <= '9')
	{
		if (sing_digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(sing_digit);
		sing_digit++;
	}
	return (0);
}
