#include <stdio.h>
/**
 * main - function or entry point
 * Return: Always 0 (success)
 **/
int main(void)
{
	char digit;

	for (digit = 0; digit <= 9; digit++)
	{
	       putchar(digit + '0');
	}

	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');
	return (0);
}
