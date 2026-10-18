multiples, symbol = map(str, input().split())

for i in range(1, 51):
    if i % int(multiples) == 0:
        print(symbol, end=" ")
    else:
        print(i, end=" ")