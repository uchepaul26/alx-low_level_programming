#include <stdio.h>

/**
 * main - entry point
 * Description: prints single digits using putchar
 * Return: 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
