#include "main.h"

/**
 * print_last_digit - prints the last digit of an int
 * @n: expected integer parameter for function
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;
	_putchar(last + '0');
	return (last);
}
