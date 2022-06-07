#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num < 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar(10);

	return (0);
}
