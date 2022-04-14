#include "main.h"

/**
 * times_table - prints tables
 *
 * Return: Always return 0.
 */
void times_table(void)
{
	int a = 0;
	int b;
	int c;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = a * b;
			if (b == 0)
			{
				_putchar(c + '0');
			}
			else if (c < 10)
			{
				_putchar('');
				_putchar(c + '0');
			}
			else
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			if (b > 9)
			{
				_putchar(',');
				_putcchar('');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
