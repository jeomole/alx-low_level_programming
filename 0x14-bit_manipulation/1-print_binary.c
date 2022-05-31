#include "main.h"

/**
 * print_binary - prints the binary representaion of a number
 * @n: integer parameter
 *
 * Return: value is void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
