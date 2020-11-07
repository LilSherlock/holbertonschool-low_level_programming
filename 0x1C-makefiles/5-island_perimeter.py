#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    counter = 0
    check = True

    for index in range(len(grid)):
        grid[index].append(0)
        for sub in range(len(grid[index])):
            copy_sub = sub
            if grid[index][sub] == 1:
                if grid[index - 1][sub] == 0:
                    counter += 1
                if grid[index][sub - 1] == 0:
                    counter += 1

                if grid[index][copy_sub + 1] == 0:
                    counter += 1
                if grid[index + 1][sub] == 0:
                    counter += 1
            check = True
        grid[index].pop()
    return counter
