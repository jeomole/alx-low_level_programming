#include <stdio.h>

/**
  * main - Entry point
  *
  * Prints all single digits of base 10 with the putchar function followed by a new line
  */
int main(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar(10);
	return (0);
}
