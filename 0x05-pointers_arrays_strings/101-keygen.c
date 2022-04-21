#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates random passwords for 101-crackme
  * Return: zero
  */
int main(void)
{
	int counter;
	char randchar;

	srand(time(NULL));
	while (counter <= 2645)
	{
		randchar = rand() % 128;
		counter = counter + randchar;
		putchar(randchar);
	}
	putchar(2772 - counter);
	return (0);
}
