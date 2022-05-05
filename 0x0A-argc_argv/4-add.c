#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
  * main - adds positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0, if numbers or nothing at all are passed to program
  * 1, if one of the number contains symbols that are not digits.
  */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; argv[i] != '\0'; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
			/**
			  * OR
			  * if (argv[i][j] < '0' || argv[i][j] > '9'
			  */
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
