def jumlah_digit(n):
    if n < 10:
        return n
    else:
        return n % 10 + jumlah_digit(n // 10)


n = int(input())
hasil = jumlah_digit(n)

print(f"Jumlah digit dari {n} adalah {hasil}")