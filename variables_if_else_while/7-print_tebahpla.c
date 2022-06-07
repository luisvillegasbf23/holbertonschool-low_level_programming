#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;

	for (num = 122; num >= 97; num--)
		putchar(num);
	putchar(10);
	return (0);
}
