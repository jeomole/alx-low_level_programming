#include "main.h"

/**
  * print_diagonal - Draws a diagonal line on the terminal
  * @n: Length of line
  * Return: Void
  */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
