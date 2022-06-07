#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}
	putchar(10);

	return (0);
}
