#include "3-calc.h"

/**
 * op_add - add numbers
 * @a: first integer to be added
 * @b: second integer to be added
 * Return: their sum
 **/
int op_add(int a, int b)
{
	int s;

	s = a + b;
	return (s);
}

/**
 * op_sub - subtract numbers
 * @a: minuend
 * @b: subtrahend
 * Return: difference
 **/
int op_sub(int a, int b)
{
	int d;

	d = a - b;
	return (d);
}
/**
 * op_mul - function that multiplies the numbers
 * @a: multiplicand
 * @b: multiplier
 * Return: product
 **/
int op_mul(int a, int b)
{
	int p;

	p = a * b;
	return (p);
}
/**
 * op_div - function divides the numbers
 * @a: dividend
 * @b: divisor
 * Return: quotient
 **/
int op_div(int a, int b)
{
	int q;

	q = a / b;
	return (q);
}
/**
 * op_mod - function divides the numbers
 * @a: dividend
 * @b: divisor
 * Return: remainder
 **/

int op_mod(int a, int b)
{
	int r;

	r = a % b;
	return (r);
}

