#include <cstdio>

int main() {
    int s, t, d, f;

    scanf("%d %d %d", &s, &t, &d);

    f = d / (2 * s) * t;

    printf("%d", f);
}