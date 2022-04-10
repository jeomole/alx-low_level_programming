#include <stdio.h>

/**
  * main - Entry point
  *
  * Print all possible different combinations of three digits
  * in ascending order, delimited by a comma and space
  * Return: Always return 0
  */
int main(void)
{
	int dig1;
	int dig2;
	int dig3;

	dig1 = '0';
	while (dig1 <= '7')
	{
		dig2 = '1';
		while (dig2 <= '8')
		{
			dig3 = '2';
			while (dig3 <= '9')
			{
				if (dig1 < dig2 && dig2 < dig3 && dig1 != dig2 && dig1 != dig3 && dig2 != dig3)
				{
					putchar(dig1);
					putchar(dig2);
					putchar(dig3);

					if (dig1 == '7' && dig2 == '8' && dig3 == '9')
					break;
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				dig3++;
				}
			dig2++;
		}
		dig1++;
	}
	putchar(10);
	return (0);
}
