#include <stdio.h>

/**
  * main - Entry point
  * Print sum of all even fibonacci numbers below 4000000
  * Return: 0
  */
int main(void)
{
	int a = 0;
	int b = 1;
	int next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum = sum + next;
	}
	printf("%i\n", sum);
	return (0);
}
