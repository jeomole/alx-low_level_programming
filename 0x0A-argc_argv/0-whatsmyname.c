#include "main.h"
#include <stdio.h>

/**
  * main - prints the name of the program followed by a new line
  * @argc: argument count
  * @argv: argumen vectir
  *
  * Return: value is 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
