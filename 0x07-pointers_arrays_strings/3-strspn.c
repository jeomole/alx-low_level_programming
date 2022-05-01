#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  *
  * @s: input
  * @accept: input
  * Return: number of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int match = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				match++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (match);
		}
		s++;
	}
	return (match);
}
