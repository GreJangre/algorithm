#include <cstdio>

int t, n, arr[12] = {0, 1, 2, 4};

int fib(int value) {
    if (value < 1) return 0;
    if (arr[value] != 0) return arr[value];
    return arr[value] = fib(value - 1) + fib(value - 2) + fib(value - 3);
}

int main() {

    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("%d\n", fib(n));
    }

    return 0;
}