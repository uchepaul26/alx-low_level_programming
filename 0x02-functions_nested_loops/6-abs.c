#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: input parameter for the fuction
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
