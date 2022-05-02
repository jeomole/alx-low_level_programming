#include "main.h"

/**
  * _pow_recursion - raises an int to the power of another
  * @x: base integer
  * @y: exponent integer
  * Return: value is x raised to y, -1 if y is lower than 0
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * pow(x, y - 1);
}
