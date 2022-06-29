#include "3-calc.h"
/**
 * main - main fuction
 * @argc: saves the memory address
 * @argv: pointer to pointer
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2] == '/' || argv[2] == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(argv[2]))
	{
		res = (*(get_op_func(argv[2])))(a,b);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		exit (99);
	}
}
