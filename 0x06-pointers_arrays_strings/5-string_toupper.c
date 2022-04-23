#include "main.h"

/**
  * string_toupper - converts lowercase letters to uppercase
  * @str: string to be converted
  * Return: the string
  */
char *string_toupper(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
