#include "main.h"

/**
 * _isalpha - performs the check for alphabetic characters
 * @c: input parameter of the function
 * Return: 1 if successful
 * 	  0 otherwise
 */

int _isalpha(int c)
{
	if (c > 64 && c < 91 && c > 96 && c < 123)
		return (1);
	return (0);
}
