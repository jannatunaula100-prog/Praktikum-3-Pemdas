#include <stdio.h>

int jumlah_digit(int n) {
    if (n < 10) {
        return n;
    }
    else {
        return n % 10 + jumlah_digit(n / 10);
    }
}

int main(void) {
    int n, hasil;

    scanf("%d", &n);

    hasil = jumlah_digit(n);

    printf("Jumlah digit dari %d adalah %d\n", n, hasil);

    return 0;
}