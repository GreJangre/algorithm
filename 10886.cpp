#include <cstdio>

int main() {
    int n, sum=0;

    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        int a;

        scanf("%d", &a);

        sum += a;
    }

    if (sum <= n/2) {
        printf("Junhee is not cute!");
    } else {
        printf("Junhee is cute!");
    }

    return 0;
}