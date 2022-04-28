#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: pointer to the memory area to be filled to
  * @n: number of bytes of the memory to be filled with b
  * @b: the constant byte b
  * Return: pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		*(s + (n - 1)) = b;
		n--;
	}
	return (s);
}
