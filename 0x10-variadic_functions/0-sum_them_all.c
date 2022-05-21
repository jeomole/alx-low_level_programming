#include <stdarg.h>

/**
  * sum_them_all
  * @n: number of parameters to add
  *
  * Return: the sum of all parameter
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	if (n != 0)
	{
		va_list ap;

		va_start(ap, n);

		for (; i < n; i++)
		sum += va_arg(ap, int);

		va_end(ap);
		return (sum);
	}
	return (0);
}
