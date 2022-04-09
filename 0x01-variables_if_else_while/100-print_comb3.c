#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: 0
  */
int main(void)
{
	int ch1;
	int ch2;

	ch1 = '0';
	while (ch1 <= '8')
	{
		ch2 = '1';
		while (ch2 <= '9')
		{
			if (ch1 < ch2 && ch1 != ch2)
			{
				putchar(ch1);
				putchar(ch2);
				
				if (ch1 != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
			ch2++;
		}
		ch1++;
	}
	putchar(10);
	return (0);
}
