#!/usr/bin/python3
"""
Perimeter finder
"""


def island_perimeter(grid):
        """
            returns the perimeter of the island described in grid:
                """
                    count = 0

                        for i in range(len(grid)):
                                    for j in range(len(grid[0])):
                                                    if grid[i][j] == 1:
                                                                        if j < (len(grid[0])-1) and grid[i][j+1] == 0:
                                                                                                count = count + 1
                                                                                                                if j > 0 and grid[i][j-1] == 0:
                                                                                                                                        count = count + 1
                                                                                                                                                        if i > 0 and grid[i-1][j] == 0:
                                                                                                                                                                                count = count + 1
                                                                                                                                                                                                if i < (len(grid)-1) and grid[i+1][j] == 0:
                                                                                                                                                                                                                        count = count + 1
                                                                                                                                                                                                                                        if i == 0 or i == len(grid) - 1:
                                                                                                                                                                                                                                                                count = count + 1
                                                                                                                                                                                                                                                                                if j == 0 or j == len(grid[0]) - 1:
                                                                                                                                                                                                                                                                                                        count = count + 1
                                                                                                                                                                                                                                                                                                            return count
