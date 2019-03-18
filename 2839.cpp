#include <stdio.h>

int main() {
    int N = 0, a = -1;

    scanf("%d", &N);

    if (3 <= N && N <= 5000) {
        if (N%5 == 0) {
            printf("%d", N/5);
        } else if (N%5 == 1 || N%5 == 3) {
            printf("%d", N/5 + 1);
        } else if (N%5 == 2) {
            if (N/5 == 1) {
                printf("%d", a);
            } else {
                printf("%d", N/5 + 2);
            }
        } else if (N%5 == 4) {
            if (N/5 == 0) {
                printf("%d", a);
            } else {
                printf("%d", N / 5 + 2);
            }
        }
        else {
            printf("%d", a);
        }
    }
}