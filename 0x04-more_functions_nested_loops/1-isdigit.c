#include "main.h"

/**
  * _isdigit - Checks for a digit from 0 to 9
  * @c: digit to be checked
  * Return: 1 if digit and 0 if otherwise
  */
int _isdigit(int c)
{
	if (c >= 0 || c <= 9)
		return (1);
	else
		return (0);
}
