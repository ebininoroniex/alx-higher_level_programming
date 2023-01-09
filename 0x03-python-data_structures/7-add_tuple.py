#!/usr/bin/python4
def add_tuple(tuple_a=(), tuple_b=()):

    # Get the length of both tuples
    len_a = len(tuple_a)
    len_b = len(tuple_b)

    # Get the first elements of each tuple
    a_1 = tuple_a[0] if len_a >= 1 else 0
    b_1 = tuple_b[0] if len_b >= 1 else 0

    # Get the second elements of each tuple
    a_2 = tuple_a[1] if len_a >= 2 else 0
    b_2 = tuple_b[1] if len_b >= 2 else 0

    # Return the sum of each elements
    return (a_1 + b_1, a_2 + b_2)
