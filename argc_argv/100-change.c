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
	int cent;
	int quarters;
	int tens;
	int twos;
	int ones;
	int total_amount;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			cent = atoi(argv[i]);

			if (cent > 0)
			{
				quarters = cent / 25;
				cent %= 25;
				tens = cent / 10;
				cent %= 10;
				twos = cent / 2;
				cent %= 2;
				ones = cent;

				total_amount = quarters + tens + twos + ones;

				printf("%d\n", total_amount);
			}
			else
			{
				printf("0\n");
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
