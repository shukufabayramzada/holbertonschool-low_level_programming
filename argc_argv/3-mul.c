#include <stdio.h>
#include <stdlib.h>
/**
 * main - function or entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 success.
 **/
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc >= 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
