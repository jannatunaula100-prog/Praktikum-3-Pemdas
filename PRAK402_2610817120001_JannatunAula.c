#include <stdio.h>

int main(void) {
    int N;
    
    scanf("%d", &N);

    // odd numbers from 1 to N
    for (int i = 1; i <= N; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    // even numbers from N to 2
    if (N % 2 == 0) {
        for (int i = N; i >= 2; i -= 2) {
            printf("%d ", i);
        }
    }
    else {
        for (int i = N - 1; i >= 2; i -= 2) {
            printf("%d ", i);
        }
    }

    return 0;
}