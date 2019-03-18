#include <cstdio>

int main() {
    int a, b, c;

    scanf("%d", &a);

    int d[a];

    for (int i=0; i<a; i++) {
        scanf("%d %d", &b, &c);

        d[i] = b+c;
    }

    for (int j=0; j<a; j++) {
        printf("%d\n", d[j]);
    }

    return 0;
}