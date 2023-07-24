#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array
 *@a: start of array
 *@n: the number of elements to print
 *
 *Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
