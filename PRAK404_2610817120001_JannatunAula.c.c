#include <stdio.h>

int main(void) {
    int choice;
    float first_value, second_value, result;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan Pilihan : ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Jannatun Aula\n");
            break;
        }

        else if (choice == 1) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &first_value);

            printf("Masukkan nilai kedua : ");
            scanf("%f", &second_value);

            result = first_value + second_value;

            printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n",
                   first_value, second_value, result);
        }

        else if (choice == 2) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &first_value);

            printf("Masukkan nilai kedua : ");
            scanf("%f", &second_value);

            result = first_value - second_value;

            printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n",
                   first_value, second_value, result);
        }

        else if (choice == 3) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &first_value);

            printf("Masukkan nilai kedua : ");
            scanf("%f", &second_value);

            result = first_value * second_value;

            printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n",
                   first_value, second_value, result);
        }

        else if (choice == 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &first_value);

            printf("Masukkan nilai kedua : ");
            scanf("%f", &second_value);

            result = first_value / second_value;

            printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n",
                   first_value, second_value, result);
        }

        else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }

    return 0;
}