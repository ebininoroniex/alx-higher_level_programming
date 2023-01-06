#!/usr/bin/python3
import sys

# Get the number of arguments
argv_len = len(sys.argv)

# Print the number of arguments
print(f'Number of argument(s): {argv_len}', end='')

# Print the list of arguments
if argv_len == 1:
    print('.')
else:
    print(':')
    for i in range(1, argv_len):
        print(f'{i}: {sys.argv[i]}')
