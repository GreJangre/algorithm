#include <cstdio>

int main() {
    int n, a[6], count = 0;

    scanf("%d", &n);

    for (int i=0; i<5; i++) {
        scanf("%d", &a[i]);

        if (a[i] == n) {
            count += 1;
        }
    }

    printf("%d", count);

    return 0;
}