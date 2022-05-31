#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to a string
  *
  * Return: the converted number, 0 if b is NULL
  * 0, if string contains number other than 1 and 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		decimal <<= 1;
		if (b[i] == '1')
			decimal += 1;
		i++;
	}
	return (decimal);
}
