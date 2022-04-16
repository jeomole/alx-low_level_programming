#include <stdio.h>

/**
  * main - Entry point
  * Return: 0
  */
int main(void)
{
	int figure = 1;

	while (figure <= 100)
	{
		if (figure == 100)
			printf("Buzz");
		else if ((figure % 15) == 0)
			printf("FizzBuzz ");
		else if ((figure % 5) == 0)
			printf("Buzz ");
		else if ((figure % 3) == 0)
			printf("Fizz ");
		else
			printf("%d ", figure);
		figure++;
	}
	printf("\n");
	return (0);
}
