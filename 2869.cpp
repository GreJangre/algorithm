#include <cstdio>

int main() {
    int a, b, v;

    scanf("%d %d %d", &a, &b, &v);
    int start=0, end = v, mid = v/2;

    while (start < end) {
        if (mid * (a - b) > v) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = (start+end)/2;
        printf("%d\n", mid);
    }
    printf("%d", mid);
}