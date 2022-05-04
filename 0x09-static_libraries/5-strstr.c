#include "main.h"

/**
  * _strstr -  finds the first occurrence of the substring
  * needle in the string haystack
  * @haystack: input string
  * @needle: input substring
  * Return: pointer to the beginning of the located substring,
  * or NULL if the substring is not found
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *ss = needle;

		while (*s == *ss && *ss != '\0')
		{
			s++;
			ss++;
		}
		if (*ss == '\0')
			return (haystack);
	}
	return (0);
}
