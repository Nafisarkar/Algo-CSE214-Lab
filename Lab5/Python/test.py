from math import ceil, floor


x = int(input())
y = int(input())
z = int(input())

res = 0;

if x % 2 != 0:
    x += 1

if y % 2 != 0:
    y += 1

if z % 2 != 0:
    z += 1

print(int(x/2 + y/2 + z/2))