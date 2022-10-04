#include <stdlib.h>
#include "main.h"

/**
*alloc_grid - creates creates a matrix
*@width: width of matrix
*@height: height of matrix
*Return: NULL if something went wrong
**/
int **alloc_grid(int width, int height)
{
	int index1;
	int index2;
	int a;
	int b;
	int **pointer;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		pointer = (int **) malloc(height * sizeof(int *));
		if (!pointer)
		{
			free(pointer);
			return (NULL);
		}
		for (index1 = 0; index1 < height; index1++)
		{
			pointer[index1] = (int *) malloc(width * sizeof(int));
			if (!pointer[index1])
			{
				for (index2 = 0; index2 < index1; index2++)
				{
					free(pointer[index2]);
				}
				free(pointer);
				return (NULL);
			}
		}
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
			{
				pointer[a][b] = 0;
			}
		}
		return (pointer);
	}
}
