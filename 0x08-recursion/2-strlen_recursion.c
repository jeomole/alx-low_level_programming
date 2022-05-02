#include "main.h"

/**
  * _strlen_recursion - returns length of a string
  * @s: input string
  * Return: value is integer
  */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	if (*s == '\0')
	return (0);
}
