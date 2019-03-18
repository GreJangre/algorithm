#include <cstdio>

int main() {
    int n;

    scanf("%d", &n);

    for (int i=1; i<n; i++) {
        for (int j=n; j>i; j--) {
            printf(" ");
        }
        for (int k=0; k<2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int l=n; l>0; l--) {
        for (int o=l; o<n; o++) {
            printf(" ");
        }
        for (int m=0; m<2*l-1; m++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}