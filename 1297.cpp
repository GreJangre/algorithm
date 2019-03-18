#include <cstdio>
#include <cmath>

int main() {
    double a, b, c, d;

    scanf("%lf %lf %lf", &a, &b, &c);

    d = sqrt(a*a/(b*b+c*c));

    printf("%d %d", (int)(b*d), (int)(c*d));

    return 0;
}