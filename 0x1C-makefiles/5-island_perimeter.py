#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    counter = 0
    top = False

    for index in range(len(grid)):
        for sub in range(len(grid[index])):
            if grid[index][sub] == 1:
                if grid[index - 1][sub] == 0 or  grid[index - 1][sub] == None:
                    counter += 1
                if grid[index][sub - 1] == 0:
                    counter += 1
                if grid[index][sub + 1] == 0:
                    counter += 1
                if grid[index + 1][sub] == 0 or  grid[index + 1][sub] == None:
                    counter += 1
                top = False
    return counter
