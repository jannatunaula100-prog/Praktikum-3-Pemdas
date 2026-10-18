number_of_rows, multiple = map(int, input().split())

result = 0

for row in range(1, number_of_rows + 1):
    row_sum = 0

    for number in range(1, row + 1):
        row_sum = row_sum + (number * multiple)

    for number in range(row, 0, -1):
        if number == 1:
            print(f"({number} * {multiple})", end="")
        else:
            print(f"({number} * {multiple}) + ", end="")

    print(f" = {row_sum}")
    result = result + row_sum

print(result)