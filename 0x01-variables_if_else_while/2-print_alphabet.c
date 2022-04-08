#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Return 0
  */
int main(void)
{
	char ch;

	ch = 'a';
		while(ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
	putchar('\n');
	return (0);
}
