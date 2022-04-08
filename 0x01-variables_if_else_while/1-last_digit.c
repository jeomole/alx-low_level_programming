#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
  * main - Entry point of program
  *
  * Return: Returns 0
  */
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
		int m = n % 10;
					if ((n % 10) > 5)
					{
						printf("Last digit of %d is %d and is greater than 5\n", n, m);
					}
					else if ((n % 10) == 0)
					{
						printf("Last digit of %d is 0 and is 0\n", n, m);
					}
					else
					{
						printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
					}
					return (0);

}
