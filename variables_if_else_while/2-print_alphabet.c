#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char start = 'a';
	char end = '{';
	char ch = start;

	while (ch != end)
	{
		putchar(ch);
		ch++;
	}
	putchar(10);

	return (0);
}

