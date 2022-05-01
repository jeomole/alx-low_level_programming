#include "main.h"

/**
  * _strpbrk - searches a string for any set of bytes
  * @s: input string
  * @accept: input string
  * Return: pointer to first occurrence in string s of any
  * of the bytes in string accept
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
