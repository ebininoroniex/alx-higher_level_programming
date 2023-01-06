#!/usr/bin/python3
import sys

# Get all the arguments passed in
args = sys.argv

# Initialize the sum variable
sum = 0

# Iterate over the arguments
for arg in args[1:]:
    # Add the argument to the sum
    sum += int(arg)

# Print the result
print(sum)
