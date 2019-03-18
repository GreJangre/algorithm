#include <cstdio>

int main() {
    int n, a[1001], root=0;

    scanf("%d\n", &n);

    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (int j=0; j<n; j++) {
        for (int k=j; k<n; k++) {
            if (a[k] < a[j]) {
                root = a[j];
                a[j] = a[k];
                a[k] = root;
            } else {
                continue;
            }
        }
        printf("%d\n", a[j]);
    }

    return 0;
}