#include <stdio.h>

int menara_hanoi(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return 2 * menara_hanoi(n - 1) + 1;
    }
}

int main(void) {
    int n, result;

    scanf("%d", &n);

    result = menara_hanoi(n);

    printf("Jumlah langkah minimum untuk %d cakram adalah %d\n", n, result);

    return 0;
}