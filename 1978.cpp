#include <cstdio>

int main() {
    int n, a[101];

    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (int j=0; j<n; j++) {
        for (int k=0; ; k++) {
            if (a[j] == 1) {
                break;
            } else if (a[k]/a[j] == 0) {
                break;
            } else {
                printf("%d", a[j]);
            }
        }
    }

    return 0;
}