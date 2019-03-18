#include <stdio.h>

int main() {
    int N=0;
    char num[101];
    int sum=0;

    scanf("%d\n", &N);
    scanf("%s", num);

    for (int i=0; i<N; i++) {
        sum += num[i] - '0';
    }
    printf("%d", sum);

    return 0;
}
