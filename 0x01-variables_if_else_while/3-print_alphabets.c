#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: 0
  */
int main(void)
{
	char ch;
	char ch_caps;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch_caps = 'A';
	while (ch_caps <= 'Z')
	{
		putchar(ch_caps);
		ch_caps++;
	}
	putchar(10);
	return (0);
}
