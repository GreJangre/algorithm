#include <cstdio>

int main() {
    int a=0,b=0,c=0;

    scanf("%d %d %d", &a, &b, &c);

    if (a < b) {
        if (a > c) {
            printf("%d %d %d", c, a, b);
        } else {
            if (b > c) {
                printf("%d %d %d", a, c, b);
            } else {
                printf("%d %d %d", a, b, c);
            }
        }
    } else {
        if (b > c) {
            printf("%d %d %d", c, b, a);
        } else {
            if (a > c) {
                printf("%d %d %d", b, c, a);
            } else {
                printf("%d %d %d", b, a, c);
            }
        }
    }

    return 0;
}