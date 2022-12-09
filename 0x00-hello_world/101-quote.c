#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print to stdout using write funtion
 *
 * Return: 0 (error)
 */

int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19,";
	write(1, text, 59);
	return (1);
}
