#include <stdio.h>

int main() {
    int N=0, M=0;
    double sum=0;
    int grade[1001];

    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        scanf("%d", &grade[i]);

        if (M <= grade[i]) {
            M = grade[i];
        }

        sum += grade[i];
    }

    printf("%.2lf", sum/M*100/N);

    return 0;
}