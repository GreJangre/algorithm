#include <stdio.h>

int main() {
    int N = 0, count = 0, sum = 0;

    scanf("%d", &N);

    sum = N;

    if (N >= 0 && N <= 99) {
        N = (N/10 + N%10)%10 + N%10*10;
        count += 1;
        for (int i=0; ; i++) {
            if (N == sum) {
                break;
            } else {
                N = (N/10 + N%10)%10 + N%10*10;
                count += 1;
            }
        }
        printf("%d", count);
    }
}