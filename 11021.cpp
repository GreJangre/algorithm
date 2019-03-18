#include <cstdio>

int main() {
    int t;

    scanf("%d", &t);

    int a[t], b[t];

    for (int i=0; i<t; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (int j=0; j<t; j++) {
        printf("Case #%d: %d\n", j+1, a[j]+b[j]);
    }

    return 0;
}