#include <stdio.h>

/**
  * main - Entry point
  *
  * Print all the numbers of base 16
  * in lowercase, followed by a new line
  */
int main(void)
{
	char hex;

	hex = '0';
	while (hex <= '9')
	{
		putchar(hex);
		hex++;
	}

	hex = 'a';
	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	putchar(10);
	return (0);
}
