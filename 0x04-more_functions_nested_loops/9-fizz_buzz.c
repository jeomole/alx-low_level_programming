#include <stdio.h>
#include "main.h"

/** main - Entry point
  * _putchar - Print a character
  * @figure: Numbers from 1 to 100
  *
  * Return: 0, for SUCCESS
  */
int _putchar(char c);
int main(void)
{
	int figure;

	figure = 1;
	while (figure <= 100)
	{
		if ((figure % 15) == 0)
			printf("FizzBuzz ");
		else if ((figure % 5) == 0)
			printf("Buzz ");
		else if ((figure % 3) == 0)
			printf("Fizz ");
		else
			printf("%d", figure);
		figure++;
	}
	_putchar(10);
	return (0);
}
