#include "main.h"

/**
  * rev_string - reverses a string
  * @s: string to be reversed
  * Return: Value is void
  */
void rev_string(char *s)
{
	/**
	  * declare integer i and j
	  * i is the index from the last character
	  * j is the index from the first character
	  * declare char temp
	  * temp stores character temporarily before swapping
	  */
	int i, j;
	char temp;

	i = 0;
	while (*(s+i) != '\0')
		i++;

	/**
	  * to achieve value of the index
	  * of the last character before NULL
	  * decrement i by 1
	  */
	i--;

	j = 0;
	while (j < i)
	{
		temp = *(s+i); /* store last char in temp */
		*(s+i) = *(s+j); /* first char swapped to position of last */
		*(s+j) = temp; /* stored char swapped to first position */
		i--;
	}
}
