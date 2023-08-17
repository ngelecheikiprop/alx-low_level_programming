#include <stddef.h>
/**
 * array_iterator - goes through array impleenting
 * a function
 * @array: the array to pass through
 * @size: the size of the array
 * @action: what to do to each element
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array == NULL) || (size<= 0) || (action == NULL))
		return;
	for(i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
