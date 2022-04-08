#include <stdio.h>

/**
  * main - Entry point
  *
  * Prints the lowercase letters of the alphabet
  * in reverse, followed by newline
  * Return: 0
  */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
