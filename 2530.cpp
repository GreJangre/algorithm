#include <cstdio>

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    d += a*3600 + b*60 + c;

    printf("%d %d %d", d/3600%24, d%3600/60, d%3600%60);
}