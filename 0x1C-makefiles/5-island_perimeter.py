#!/usr/bin/python3
'''A script that returns perimeter of an island'''


def island_perimeter(grid):
    '''function definition'''
    num = 0
    for layer1 in grid:
        for layer2 in layer1:
                if layer2 == 1:
                    num+=1
    return num * 2 + 2
