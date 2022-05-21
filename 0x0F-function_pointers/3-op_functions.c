#include "3-calc.h"

/**
  * op_add - adds a and b
  * @a: first int
  * @b: second int
  * Return: returns the sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts b from a
  * @a: first int
  * @b: second int
  * Return: returns the difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies a and b
  * @a: first int
  * @b: second int
  * Return: returns the product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides a by b
  * @a: number
  * @b: divisor
  * Return: returns the result of the division of a by b
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - modulo
  * @a: first number
  * @b: second number
  * Return: returns the remainder of the division of a by b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
