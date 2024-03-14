#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: count of arguments
 * @av: array of arguments
 * Return: pointer to anew string or NULL depends on the case
 **/
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int size = 0;
	int index = 0;
	char *new_string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		size += strlen(av[i]) + 1;
	}
	new_string = malloc(size * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_string[index++] = av[i][j];
		}
		new_string[index++] = '\n';
	}
	new_string[index] = '\0';
	return (new_string);
}

