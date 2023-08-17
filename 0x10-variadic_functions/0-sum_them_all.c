/**
* File: 0-sum_them_all.c
* Auth: Wayne R Masakure
*/

#include <stdarg.h>
/**
 * sum_them_all - Return the sum of all the arguments.
 * @n: Number of arguments.
 * @...: List of arguments.
 *
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(valist, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);
	return (sum);
}
