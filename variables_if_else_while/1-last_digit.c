#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main -function or entry point
 * Return: Always 0 (success)
 **/
/* betty style doc for function main goes there */
int main(void)
{
	int n, lst__digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst__digit = n % 10;
		if (lst__digit > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, lst__digit);
		} else if (lst__digit == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, lst__digit);
		} else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst__digit);
		}
		return (0);
}
