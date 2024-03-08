#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function or entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 success.
 **/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *num = argv[i];

			for (; *num; num++)
			{
				if (!isdigit(*num))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
