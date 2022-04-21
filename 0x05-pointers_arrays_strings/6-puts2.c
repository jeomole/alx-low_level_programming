#include "main.h"

/**
  * puts2 - prints every other character starting from 0
  * @str: string to be printed
  * Return: Value is void
  */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(*(str + i));
		}
		else
		{
			break;
		}
		i++;
	}
	_putchar(10);
}
