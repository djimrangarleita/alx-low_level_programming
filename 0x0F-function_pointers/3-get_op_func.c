#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - use the @s param to get the correct func
 * @s: operator, char pointer
 * Return: pointer to the correct func to execute
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
