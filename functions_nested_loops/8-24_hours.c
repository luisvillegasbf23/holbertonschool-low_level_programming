#include "main.h"
/**
 * jack_bauer - This function display every minute of the day of Jack Bauer
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hrs;
	int mint;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mint = 0; mint < 60; mint++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mint / 10) + '0');
			_putchar((mint % 10) + '0');
			_putchar('\n');
		}
	}
}

