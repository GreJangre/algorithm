#include <cstdio>

int main() {
    int n;

    scanf("%d", &n);

    for (int i=1; i<n; i++) {
        for (int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int l=n; l>0; l--) {
        for (int k=0; k < l; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}