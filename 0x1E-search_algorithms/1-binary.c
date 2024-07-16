#include "search_algos.h"
/**
 * binary_search - uses the binary search algorithim
 *
 * @array: the array to look into
 * @size: the size of the array
 * @value: what to look for
 *
 * Return: index in array where value is an -1 if not there
 *
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int middle;
	int i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
