N = int(input())

for i in range(1, N + 1, 2):
    print(i, end=" ")

print()

if N % 2 == 0:
    start = N
else:
    start = N - 1

for i in range(start, 1, -2):
    print(i, end=" ")