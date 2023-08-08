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
	int **rows;
	int i;
	int j;

	if ((width < 1) || (height < 1))
	{
		return (NULL);
	}
	**rows = = (int **)malloc(heigth * sizeof(int *));
	if (rows == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		row[i] = (int *)malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			rows[i][j] = 0;
		}
	}
	return (rows);
}
