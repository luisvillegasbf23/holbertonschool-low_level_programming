#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	float floatType;
	long int longType;
	long long int longlongType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(longlongType));
	printf("Size of a float: %zu bytes(s)\n", sizeof(floatType));
	return (0);
	}
