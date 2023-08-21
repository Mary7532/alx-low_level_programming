#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @i: int to check
 * @j: int to check
 * Return: 0 is success
 */
void print_array(int *i, int j)
{
	int x;

	for (x = 0; x < j; x++)
		if (x != j - 1)
		printf("%d, ", i[x]);
		else
			printf("%d", i[x]);
printf("\n");
}

