#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiples two integers passed to the program
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 1, if the program does not receive two arguments
  * 0, on success
  */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
