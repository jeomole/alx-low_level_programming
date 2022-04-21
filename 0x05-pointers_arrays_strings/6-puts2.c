#include "main.h"

/**
  * puts2 - prints every other character starting from 0
  * @str: string to be printed
  * Return: Value is void
  */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(*(str + i));
		}
		else
		{
			break;
		}
	}
	_putchar(10);
}
