#include "main.h"
/**
* reset_to_98 - akes a pointer to an int as parameter
* and updates the value it points to to 98
* @n: parameter
**/
void reset_to_98(int *n)
{
	int **p = &n;

	**p = 98;
}
