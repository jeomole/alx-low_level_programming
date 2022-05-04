#include "main.h"

/**
  * _strcpy - copy the contents of a string into a buffer
  * @dest: the buffer
  * @src: the string to be copied from
  * Return: Returns a pointer
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
