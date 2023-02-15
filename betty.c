#include "main.h"
/**
 * print_array - Prints an array of integers
 * @a: Pointer to the array of integers
 * @n: the number of elements in the array
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n -1)
			printf(", ");
	}

	printf("\n");
}
