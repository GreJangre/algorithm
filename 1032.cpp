#include <cstdio>
#include <string.h>

int main() {

    int n;

    scanf("%d", &n);

    char a[n+1][51], *check;

    for (int i = 0; i < n; i++) {
        scanf("%s", a[i]);
    }

    check = a[0];

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < strlen(a[0]); k++) {
            if (check[k] == a[j][k]) {
                continue;
            } else {
                check[k] = '?';
            }
        }
    }

    printf("%s", check);

    return 0;
}