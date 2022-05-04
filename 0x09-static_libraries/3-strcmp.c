#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: string 1
  * @s2: string 2
  * Return: 0 if same, diff otherwise
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (s1[i] != '\0' && diff == 0)
	{
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}
