/**
 * int_index - searches for an integer
 * @array: where to search
 * @size: the size of the array
 * @cmp: the function used to compare
 *
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int index;

	if (size <= 0)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
		{
			return (index);
		}
	}
	return (-1)
}
