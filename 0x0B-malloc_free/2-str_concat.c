#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * Return: pointer to newly allocated space in memory containing s1 and s2
  * NULL, on failure
  */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, size, i, j;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	size = len1 + (len2 + 1);

	newstr = malloc (size * sizeof(char));
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		newstr[i] = s1[i];
	for (j = 0; j < len2; j++)
	{
		newstr[len1] = s2[j];
		len1++;
	}
	newstr[size + 1] = '\0';
	return (newstr);
}
