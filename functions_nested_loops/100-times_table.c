#include "main.h"
/**
 * times_table - prints the 9 times table
 * @n: character to print
 * Return: 1 sucess or 0 in fail
 */
void print_times_table(int n)
{
	int r, a, b;

	if (n > 15 || n < 0)
		return;
	
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{	
			r = a * b;
			if (b == 0)
				_putchar(r + '0');

			if ( r <= 9)
			{	
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}

			if ( r <= 99 && r > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}

			if (r > 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((r / 100) + '0');
				_putchar(((r / 10) % 10) + '0');
				_putchar((r % 10) + '0');

			}
		}
		_putchar(10);
	}
}
