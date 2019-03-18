#include <cstdio>

int main() {
    int a, b, v, mid;

    scanf("%d %d %d", &a, &b, &v);
    int start, end = v;

    while (start <= end) {
        if (start == end) {
            break;
        }

        if (mid * (a-b) > v) {
            end = mid - 1;
        } else if (mid * (a-b) <= v) {
            start = mid + 1;
        }

        mid = (start+end)/2;
    }
    printf("%d", mid);
}