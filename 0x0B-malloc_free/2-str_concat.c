#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: string 1
  * @s2: string 2
  *
  * Return: A pointer to a newly allocated space in memory
  * which contains the contents of s1, followed by
  * the contents of s2, and null terminated
  * The function should return NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, size;
	int i, j;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* find length of s1 and s2 */
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
/* add length of s1 to s2 to find the size of the new concatenated array */
	size = len1 + (len2 + 1);

/* allocate space for the new array of chars */
	newstr = malloc (size * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		newstr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		newstr[len1] = s2[j];
		len1++;
	}
	newstr[size + 1] = '\0';

	return (newstr);
}

