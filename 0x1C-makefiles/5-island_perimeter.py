#!/usr/bin/python3
"""Define the function island_perimeter"""


def island_perimeter(grid):
    """Function to calculate an island 
    with the following list of integers:
    0 represents a water zone
    1 represents a land zone. It is a 2D list
    One cell is a square with side length 1
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
