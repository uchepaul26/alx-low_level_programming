#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: expected input to check
 * Return: 1 if c is digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
