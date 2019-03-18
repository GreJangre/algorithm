#include <cstdio>

int main() {
    int a[6];

    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

    printf("%d", (a[0]*a[0]+a[1]*a[1]+a[2]*a[2]+a[3]*a[3]+a[4]*a[4])%10);
}