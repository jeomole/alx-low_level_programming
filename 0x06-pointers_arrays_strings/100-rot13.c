#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @str: string to be encoded
  * Return: pointer to the string encoded
  */
char *rot13(char *str)
{
	int i, j;
	char alp[] = {aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ};
	char rot[] = {nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM};

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (alp[j) != '\0')
		{
			if (str[i] == alp[j])
			{
				str[i] = rot[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
