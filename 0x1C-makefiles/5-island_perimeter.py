#!/usr/bin/python3
""" Island Perimeter Module"""

def island_perimeter(grid):
    """Calculates the island perimeter"""
    height, width = len(grid), len(grid[0])

    p = 0
    for h in range(height):
        for i in range(width):
            if grid[h][i] == 1:
                p += 4
            if i > 0 and grid[h][i] == 1:
                if grid[h][i - 1] == 1:
                    p -= 2
            if h > 0 and grid[h][i] == 1:
                if grid[h - 1][i] == 1:
                    p -= 2
    return p


