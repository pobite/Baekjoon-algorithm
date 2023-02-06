n = int(input())
for i in range(n):
    print(" " * (n - i - 1) + "*" + "*" * (i * 2))
for j in range(1, n):
    print(" " * j + "*" * ((2 * n) - j * 2 -1))