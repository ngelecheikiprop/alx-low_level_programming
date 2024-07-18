#include "search_algos.h"
/**
 * linear_search - looks for item in array
 *
 * @array: the array to look in
 * @size: the size of array
 * @value: what to look for
 *
 * Return: the index n array value was found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;
	int current_number = 0;

	while (index < size)
	{
		current_number = array[index];
		printf("Value checked array[%lu] = [%d]\n", index, current_number);
		if (current_number == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
