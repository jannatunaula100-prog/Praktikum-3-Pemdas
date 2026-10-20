a, b = map(int, input().split())

if a < b:
    for i in range(a, b + 1):
        print(i, b - (i - a), end="")
        
        if i != b:
            print(" - ", end="")

else:
    for i in range(a, b - 1, -1):
        print(i, b + (a - i), end="")
        
        if i != b:
            print(" - ", end="")