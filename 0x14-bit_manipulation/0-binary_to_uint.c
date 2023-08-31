#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 * Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, mult;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (mult = 1, num = 0, len--; len >= 0; len--, mult *= 2)
	{
		if (b[len] == '1')
			num += mult;
	}

	return (num);
}
