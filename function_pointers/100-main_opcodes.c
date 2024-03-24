#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int bytes, i;

	if (argc != 2)
	{
	       	printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	
	if (bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *main_ptr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx ", *(main_ptr + i));
	}
	printf("\n");
	return (0);
}

