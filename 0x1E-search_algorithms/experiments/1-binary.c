#include "search_algos.h"

/**
 * middle_index - find the middle index of an array
 *
 * @size: the size of the array
 *
 * Return: the index at the middle
 */
size_t middle_index(size_t size)
{
	if (size == 2)
		return 1;
	if (size % 2 == 0)
		return ((size / 2) - 1);
	return (size / 2);
}

/**
 * split_array - gets a part of an array
 *
 * @array: the array to split
 * @start: the index to start from
 * @end: the index to end at
 *
 * Return: the array that is taken from the main array
 */
int *split_array(int *array, int start, int end)
{
	int j = 0;
	int i;
	int *newArray = malloc(sizeof(int) * ((end - start) + 1));

	for (i = start; i <= end; i++)
	{
		//printf("placing %d-------\n", array[i]);
		newArray[j] = array[i];
		j++;
	}
	printf("the new array\n");
	for (int i = start; i <= end; i++)
		printf("%d", newArray[i]);
	printf("---------\n");
	return (newArray);
}

/**
* binary_search - uses binary search to find a number
*                 in a sorted array
*
* @array: the array to search in
* @size: the size of the array
* @value: the value to look for
*
* Return: the index you found the number in the array
*
*/
int binary_search(int *array, size_t size, int value)
{
	int middleIndex;
	int *splitArray;

	middleIndex = middle_index(size);
	printf("middle Index : %d of size %lu\n", middleIndex, size);
	if (array[middleIndex] == value)
	{
		printf("returning midle index");
		return (middleIndex);
	}
	else if (value < array[middleIndex])
	{
		printf("value->%d is less than %d\n", value, array[middleIndex]);
		splitArray = split_array(array, 0, middleIndex - 1);
		if (splitArray)
			printf("we have split array\n");
		else
			printf("no split array\n");
		printf("after split array, first value:%d\n", splitArray[1]);
		int i = 0;
		//int length = sizeof(splitArray) / sizeof(splitArray[0]);
		int length = 4;
		printf("length:%d\n", length);
		while (i < length)
		{
                        printf("%d,",splitArray[i]);
			i++;
                }
		printf("after while i  is %d\n", i);
		printf("\n");

		binary_search(splitArray, sizeof(splitArray) / sizeof(splitArray[0]), value);
	}
	else if (value > array[middleIndex])
	{
		printf("value->%d is more than %d", value, array[middleIndex]);
		splitArray = split_array(array, middleIndex + 1, size - 1);
		int i = 1;
		while (splitArray[i])
		{
			printf("%d",splitArray[i]);
		}
		printf("\n");
		//binary_search(splitArray, sizeof(splitArray) / sizeof(splitArray[0]), value);
	}
	else
	{
		printf("returning else -1");
		return (-1);
	}
}
