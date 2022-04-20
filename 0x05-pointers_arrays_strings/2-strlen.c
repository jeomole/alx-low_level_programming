#include "main.h"

/**
  * _strlen - returns the length of string
  * @s - string to be evaluated
  * Return: length of string
  */
int _strlen(char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		_putchar(i);
	}
	return (i);
}
