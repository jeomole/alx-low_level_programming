#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - appends n bytes of s2 to s1
  * @s1: string 1
  * @s2: string 2
  * @n: number of bytes to copy from s2
  * Return: On success, a pointer to the newly allocated area
  * On failure, NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
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
	
	if n > len2
	n = len2;

	newstr = malloc(sizeof(s1) + n);
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		newstr[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		newstr[len1] = s2[j];
		len1++;
	}
	newstr[sizeof(s1) + n + 1] = '\0';
	return (newstr);
}
