#include "main.h"

/**
  * isalpha - Checks if c is an alphabetic character
  * @c: character to check
  * Return: Returns 1 if alphabet and 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
