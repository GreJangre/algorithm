#include <cstdio>

int main() {
    int  a;

    scanf("%d", &a);

    if (a > 5) {
        printf("%d", 5 * ((a - 5) + 2));
    } else if (a == 5) {
        printf("5");
    } else {
        printf("0");
    }

    return 0;
}