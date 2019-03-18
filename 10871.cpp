#include <stdio.h>

int main() {
    int N=0, X=0;
    int A[10001];

    scanf("%d %d", &N, &X);

    for (int i=0; i<N; i++) {
        scanf("%d", &A[i]);

        if (A[i] < X) {
            printf("%d ", A[i]);
        }
    }

    return 0;
}