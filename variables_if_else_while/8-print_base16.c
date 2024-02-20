#include <stdio.h>
/**
 * main - function or entry point
 * Return: Always 0 (success)
 **/
int main(void)
{
	char digit;
	char letter;

	for (digit = 0; digit <= 9; digit++)
	{
	       putchar(digit + '0');
	}


	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
