#include "main.h"

/**
  * leet - encodes a string to leet(1337)
  * @str: string to be encoded
  * Return: pointer to encoded string
  */
char *leet(char *str)
{
	int i, j;
	char alpha[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (str[i] == alpha[j])
				str[i] = leet[j];
		j++;
		}
	i++;
	}
	return (str);
}
