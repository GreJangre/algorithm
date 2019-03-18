#include <cstdio>

int main() {
    int n;

    scanf("%d", &n);

    for (int i=n; i>0; i--) {
        for (int k=i; k<n; k++) {
            printf(" ");
        }
        for (int j=2*i-1; j>0; j--) {
            printf("*");
        }
        printf("\n");
    }

    for (int l=2; l<n+1; l++) {
        for (int m=l; m<n; m++) {
            printf(" ");
        }
        for (int o=0; o<2*l-1; o++) {
            printf("*");
        }
        printf("\n");
    }
}