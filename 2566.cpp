#include <cstdio>

int main() {
    int a[82], max = 0, count;

    for (int i=0; i<81; i++) {
        scanf("%d", &a[i]);
    }

    for (int j=0; j<81; j++) {
        if (a[j] >= max) {
            max = a[j];
            count = j;
        }
    }

    printf("%d\n%d %d", max, count / 9 + 1, count % 9 + 1);

    return 0;
}