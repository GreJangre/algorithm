#include <cstdio>

int main() {
    int a, b=100, sum=0, count=0;

    for (int i=0; i<7; i++) {
        scanf("%d", &a);

        if (a%2 == 1) {
            if (a < b) {
                b = a;
            }
            sum += a;
            count++;
        }
    }
    if (count == 0) {
        printf("-1");
    } else {
        printf("%d\n%d", sum, b);
    }

    return 0;
}