#include <stdio.h>
#include <math.h>

/**
 * maxPrimeFactors - function to find largest prime factor
 * Return: MaxPrime
 * @n: charcater that will be checked
 **/
long maxPrimeFactors(long n)
{
	long maxPrime = -1;
	int i;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}
	while (n % 3 == 0)
	{
		maxPrime = 3;
		n = n / 3;
	}
	for (i = 5; i * i <= n; i += 6)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrime = i + 2;
			n = n / (i + 2);
		}
	}
	if (n > 4)
		maxPrime = n;
	return (maxPrime);
}
/**
* main - function or entry point
* Return: Always 0 success.
**/
int main(void)
{
	long n = 612852475143;

	printf("%ld\n", maxPrimeFactors(n));
	return (0);
}
