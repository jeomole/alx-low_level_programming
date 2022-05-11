#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory usiing malloc
  * @b: integer value to be allocated  space for
  *
  * Return: On success, a pointer to the allocated memory
  * otherwise, if malloc fails,
  * cause normal process termination with a status value of 98
  */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
