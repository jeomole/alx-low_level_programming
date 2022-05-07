#include "main.h"
#include "stdlib.h"

/**
  * create_array - creates an array of chars,
  *  and initializes it with a specific char
  * @size: size of array
  * @c: character to fill array with
  * Return: a pointer to the created array
  * or NULL if program fails
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	return (NULL);

	s = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	
	free(s);

	return (s);
}

