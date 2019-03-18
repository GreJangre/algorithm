#include <cstdio>

int main() {
    int n;

    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        for (int j=0; j<i; j++) {
            printf("*");
        }
        for (int k=2*i-2; k<2*n-2; k++) {
            printf(" ");
        }
        for (int l=0; l<i; l++) {
            printf("*");
        }
        printf("\n");
    }

    for (int m=n-1; m>0; m--) {
        for (int o=0; o<m; o++) {
            printf("*");
        }
        for (int p=2*m-1; p<2*n-1; p++) {
            printf(" ");
        }
        for (int q=0; q<m; q++) {
            printf("*");
        }
        printf("\n");
    }
}