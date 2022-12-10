#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: checks the last digit of a number input
 * Return: 0
 */

int main(void)
{
	int n;
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst = n % 10;
	if (lst > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst);
	else if (lst == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (lst <= 5 && lst > 0)
		printf("Last digit of %d is %d and is less than 6\n", n, lst);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst);

	return (0);
}
