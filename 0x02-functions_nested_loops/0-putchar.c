#include "main.h"

/**
 * main - Entry point
 * Description: prints _putchar to stdout
 * Return: Always 0 (Success)
 */

int main(void)
{
	char st[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(st[ch]);
	_putchar('\n');

	return (0);
}
