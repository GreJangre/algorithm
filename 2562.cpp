#include <cstdio>

int main() {
    int a[10], max=0;

    for (int i=0; i<9; i++) {
        scanf("%d", &a[i]);

        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("%d\n", max);

    for (int j=0; j<9; j++) {
        if (max == a[j]) {
            printf("%d", j+1);
            break;
        }
    }
}