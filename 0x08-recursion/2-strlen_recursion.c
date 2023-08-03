#include "main.h"

/**
 * _strlen_recursion - write a function that returns length of a string
 *@s: Input string
 *
 *Return: Result is the lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
