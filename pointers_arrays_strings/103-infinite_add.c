#include <stdio.h>
#include <string.h>
/**
* infinite_add - function adds 2 integers
*@n1: first number
*@n2: second number
* @r: is the buffer that the function will use to store the result
* @size_r: is the buffer size
* Return: a pointer to the result
**/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int i = len1 - 1;
	int j = len2 - 1;
	int k = size_r - 1;
	int carry = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
	int sum = carry;

	if (i >= 0)
	{
	sum += n1[i] - '0';
	i--;
	}

	if (j >= 0)
	{
	sum += n2[j] - '0';
	j--;
	}

	if (k < 0)
	{
	return (0);
	}

	r[k] = (sum % 10) + '0';
	carry = sum / 10;

	k--;
}
	if (k < 0)
	{
	return (0);
	}

	while (k >= 0)
	{
	r[k] = '\0';
	k--;
	}
	return (&r[k + 1]);
}
