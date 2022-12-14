#include "main.h"

/**
 * jack_bauer - prints ebery minute of the day
 */

void jack_bauer(void)
{
	int min = 0;
	int hr;

	while (hr = 0; hr < 24; hr++)
	{
		while (min < 60)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
			min++;
		}
	}
}
