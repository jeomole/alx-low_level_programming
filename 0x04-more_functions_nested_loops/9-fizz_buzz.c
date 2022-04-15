#include <stdio.h>

/** main - Entry point
 * @figure: Numbers from 1 to 100
 *
 * Return: 0, for SUCCESS
 */
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
	putchar(10);
	return (0);
}
