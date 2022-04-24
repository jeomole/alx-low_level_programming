#include "main.h"

/**
  * cap_string - capitalizes all new words of a string
  *
  * @str: string passed as argument
  * Return: pointer to the string passed as argument
  */
char *cap_string(char *str)
{
	int i;
	int j;
	/* Array of ASCII codes for characters that are valid as word separators */
	char separator[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		for (j = 0; separator[j] != '\0'; s++)
		{
			if (separator[j] == str[i] && str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
