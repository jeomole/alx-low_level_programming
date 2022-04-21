#include "main.h"

/**
  * _strcpy - copies string into buffer
  * @dest: buffer
  * @src: string to copy from
  * Return: Value is the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	char *dest_point = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest_point);
}
