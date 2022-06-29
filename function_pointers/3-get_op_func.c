#include "3-calc.h"
/**
 * *get_op_func - function pointer
 * @s: pointer to char
 *
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (s != ops[i].op)
		i++;
	return (ops[i].f);
}
