#include "main.h"

/**
  * _isdigit - Checks if input is a single digit
  * @c: Input
  * Return: 1 if number, 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
