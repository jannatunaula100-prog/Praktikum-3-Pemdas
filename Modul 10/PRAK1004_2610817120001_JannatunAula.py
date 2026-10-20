def menara_hanoi(n):
    if n == 1:
        return 1
    else:
        return 2 * menara_hanoi(n - 1) + 1

n = int(input())
result = menara_hanoi(n)

print(f"Jumlah langkah minimum untuk {n} cakram adalah {result}")