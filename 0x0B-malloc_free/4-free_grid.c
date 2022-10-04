#include <stdlib.h>
#include "main.h"

/**
*free_grid - creates a two dimention grid
*@grid: pointer to another pointer
*@height: height of grid
*Return: returns nothing
**/
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
