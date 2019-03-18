#include <cstdio>

int main() {
    int n;

    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        for (int j=n-1; j>i; j--) {
            printf(" ");
        }
        for (int k=0; k<=i; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int p=0; p<n; p++) {
        for (int l=0; l<=p; l++) {
            printf(" ");
        }
        for (int m=n-1; m>p; m--) {
            printf("*");
        }
        printf("\n");
    }
}