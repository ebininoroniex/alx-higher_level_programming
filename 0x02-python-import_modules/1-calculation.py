#!/usr/bin/python3
from calculator_1 import add
from calculator_1 import sub
from calculator_1 import mul
from calculator_1 import div
a = 10
b = 5

add = (a + b)
print(f'{a} + {b} = {add}')

sub = (a - b)
print(f'{a} - {b} = {sub}')

mul = (a * b)
print(f'{a} * {b} = {mul}')

div = (a / b)
div1 = round(div)
print(f'{a} / {b} = {div1}')
