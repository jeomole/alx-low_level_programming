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
		half = length / 2;
	}
	else
		half = (length / 2) + 1;

	for (i = half; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar(10);
}
