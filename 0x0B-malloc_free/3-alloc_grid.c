#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *alloc_grid - returns pointer to two dimensional array
  *@width: the width of array
  *@height: the height of array
  *
  *Return: pointer to array made
  */
int **alloc_grid(int width, int height)
{
	int **rows = (int **)malloc(height * sizeof(int *));
	int i;
	int j;

	if ((width < 1) || (height < 1))
	{
		return (NULL);
	}
	if (rows == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		rows[i] = malloc(width * sizeof(int));
		if (rows[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(rows[j]);
			}
			free(rows);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			rows[i][j] = 0;
		}
	}
	return (rows);
}
