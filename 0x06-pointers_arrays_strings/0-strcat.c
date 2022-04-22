#include "main.h"

/**
  * _strcat - concatenates two string
  * @dest: string to be appended to
  * @src: string to append
  * Return: Value is the pointer to resulting string
  */
char *_strcat(char *dest, char *src)
{
	int index, length;

	length = 0;
	while (dest[length] != '\0')
		length++;

	index = 0;
	while (src[index] != '\0')
	{
		dest[length] = src[index];
		length++;
		index++;
	}
	dest[length] = '\0';
	return (dest);
}
