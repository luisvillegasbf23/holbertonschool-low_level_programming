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
	char START = 'A';
	char END = '[';
	char CH = START;

	while (ch != end)
	{
		putchar(ch);
		ch++;
	}
	while (CH != END)
	{
		putchar(CH);
		CH++;
	}
	putchar(10);

	return (0);
}
