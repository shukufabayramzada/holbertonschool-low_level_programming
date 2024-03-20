#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 * @s:  operator passed as argument to the program
 * Return:  a pointer to the function
 **/

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
