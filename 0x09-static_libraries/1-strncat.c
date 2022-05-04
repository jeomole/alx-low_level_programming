#include "main.h"

/**
  * _strncat - appends a maximum of n characters from src to dest
  * @dest: string to be appended to
  * @src: string to append from
  * @n: maximum number of bytes to be copied from src
  * Return: pointer to the resulting dest string
  */
char *_strncat(char *dest, char *src, int n)
{
	int index, length;

	length = 0;
	while (dest[length] != '\0')
		length++;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[length] = src[index];
		length++;
		index++;
	}
	return (dest);
}
