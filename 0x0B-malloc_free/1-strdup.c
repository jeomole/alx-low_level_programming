#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: the string given as a parameter
  *
  * Return: returns a pointer to the duplicated string
  * returns a pointer to the duplicated string
  */
char *_strdup(char *str)
{
	char *newstr;
	int i, size;

	if (str == NULL)
	return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		size = i + 1;
		i++;
	}

	newstr = malloc(size * sizeof(char));

	if (newstr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		newstr[i] = str[i]
	}
	return (newstr);
}
