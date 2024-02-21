#include <stdio.h>
/**
 * main - function or entry point
 * Return: Always 0 (success)
 **/
int main(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
