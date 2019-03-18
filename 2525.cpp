#include <cstdio>

int main() {
    int A = 0, B = 0, C = 0;

    scanf("%d %d", &A, &B);
    scanf("%d", &C);

    if (B + C >= 60) {
        if (A + (B+C)/60 >= 24) {
            printf("%d %d", A + (B+C)/60 - 24, (B+C)%60);
        } else {
            printf("%d %d", A + (B+C)/60, (B+C)%60);
        }
    } else {
        printf("%d %d", A, B+C);
    }
}