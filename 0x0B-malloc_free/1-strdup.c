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

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}

	newstr = malloc((size + 1) * sizeof(char));

	if (newstr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		newstr[i] = str[i];
	}
	newstr[i] = '\0';

	return (newstr);
}
