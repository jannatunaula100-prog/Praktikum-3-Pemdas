#include <stdio.h>

int main(void) {
    int number_of_rows, multiple;
    int result = 0;
    int row, number;
    int row_sum;

    scanf("%d %d", &number_of_rows, &multiple);

    for (row = 1; row <= number_of_rows; row++) {
        row_sum = 0;

        for (number = 1; number <= row; number++) {
            row_sum = row_sum + (number * multiple);
        }

        for (number = row; number >= 1; number--) {
            if (number == 1) {
                printf("(%d * %d)", number, multiple);
            } else {
                printf("(%d * %d) + ", number, multiple);
            }
        }

        printf(" = %d\n", row_sum);
        result = result + row_sum;
    }

    printf("%d\n", result);

    return 0;
}