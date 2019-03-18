#include <cstdio>

int main() {
    int h=0, m=0;

    scanf("%d %d", &h, &m);

    if (h < 1) {
        printf("%d %d", h+23, m+15);
    } else {
        if (m >= 45) {
            printf("%d %d", h, m - 45);
        } else {
            printf("%d %d", h - 1, m + 15);
        }
    }
}