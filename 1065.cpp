#include <cstdio>

int main() {
    int n, count=0;

    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        if (i<100) {
            count++;
        } else {
            if (i % 10 - (i % 100) / 10 == (i % 100) / 10 - i / 100) {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}