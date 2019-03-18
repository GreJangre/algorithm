#include <cstdio>

int main() {
    int n;
    char k[61];

    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        scanf("%s", k);

        for (int j=0; ; j++) {
            if (k[j] == '\0') {
                if (k[j-1]%2 == 0) {
                    printf("even\n");
                    break;
                } else {
                    printf("odd\n");
                    break;
                }
            }
        }
    }

    return 0;
}