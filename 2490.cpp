#include <cstdio>

int main() {
    int a, b, c, d;

    for (int i=0; i<3; i++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (a+b+c+d == 0) {
            printf("D");
        } else if (a+b+c+d == 1) {
            printf("C");
        } else if (a+b+c+d == 2) {
            printf("B");
        } else if (a+b+c+d == 3) {
            printf("A");
        } else if (a+b+c+d == 4) {
            printf("E");
        }
        printf("\n");
    }

    return 0;
}