#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *array_range - array of range;
  *@min: from this number
  *@max: to this number
  *
  *Return: pointer to array
  */
int *array_range(int min, int max)
{
	int number;
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	number = (max - min) + 1;
	ptr = malloc(number * sizeof(int));
	for (i = 0; i < number; i++)
	{
		ptr[i] = min + i;
		if (ptr == NULL)
		{
			free (ptr);
			return (NULL);
		}
	}
	return (ptr);

}
