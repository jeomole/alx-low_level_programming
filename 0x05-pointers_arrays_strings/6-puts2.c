#include "main.h"

/**
  * puts2 - prints every other character starting from 0
  * @str: string to be printed
  * Return: Value is void
  */
void puts2(char *str)
{
	int i;
	char temp;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			temp = *(str + i);
			_putchar(temp);
		}
	}
	_putchar(10);
}
