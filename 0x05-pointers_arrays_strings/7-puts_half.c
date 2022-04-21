#include "main.h"

/**
  * puts_half - prints half a string
  * @str: string to be printed
  * Return: Value is Void
  */
void puts_half(char *str)
{
	int i;
	int length;
	int half;

	length = 0;
	while (*(str + length) != '\0')
		length++;

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
		n = (length / 2) + 1;

	for (i = n; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar(10);
}
