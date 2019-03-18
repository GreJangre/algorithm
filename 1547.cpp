#include <cstdio>

int main() {

    int a, b, c, d[] = {1, 2, 3}, e;

    scanf("%d", &a);

    for (int i=0; i<a; i++) {
        scanf("%d %d", &b, &c);

        for (int j=0; j<3; j++) {
            if (d[j] == b) {
                for (int k = 0; k < 3; k++) {
                    if (d[k] == c) {
                        e = d[j];
                        d[j] = d[k];
                        d[k] = e;

                        break;
                    }
                }
                break;
            }
        }
    }
    printf("%d", d[0]);

    return 0;
}