#include <stdio.h>

/**
  * _strncpy - copies a string
  * @dest: destination string
  * @src: source string
  * Return: pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int index, length;

	length = 0;
	while (src[length] != '\0')
		length++;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];

	for (; n > index; index++)
		dest[index] = '\0';

	return (dest);
}
