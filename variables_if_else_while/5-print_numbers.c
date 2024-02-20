#include <stdio.h>
/**
 * main -function or entry point
 * Description - Prints all single digits
 * of base 10 from 0
 * Return: Always 0 (success)
 **/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
