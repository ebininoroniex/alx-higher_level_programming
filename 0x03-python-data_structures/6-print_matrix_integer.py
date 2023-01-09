#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    """Print a matrix of integers

    Args:
        matrix (list): matrix of integers

    Returns:
        None
    """

    for row in matrix:
        for num in row:
            print("{:d}".format(num), end=" ")
        print()
