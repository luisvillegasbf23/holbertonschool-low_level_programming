#include "main.h"
/**
 * times_table - prints the 9 times table
 * nothign void function
 * Return: 1 sucess or 0 in fail
 */
void times_table(void)
{
	int x, y;
	int r;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			r = x * y;
			if (y != 0)
				_putchar(r > 9 ? r / 10 + '0' : 32);
			_putchar((r % 10) + '0');
			if (y <= 8)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
