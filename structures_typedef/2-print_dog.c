#include <stdio.h>
#include "dog.h"
/**
 * print_dog - initialize the variable of type struct dog
 * @d: a pointer to the dog
 **/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
		{
			printf("Name: %s\n", (*d).name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		
		printf("Age: ");
		!(*d).age ? printf("%f\n", 0.) : printf("%f\n", (*d).age);
		
		if ((*d).owner != NULL)
		{
			printf("Owner: %s\n", (*d).owner);
		}
		else
		{
			printf("Owner: (nil)");
		}
	}
}

