#include <cstdio>

int main() {
    int n, count=0, num=0;
    char a[81];

    scanf("%d\n", &n);

    for (int j=0; j<n; j++) {
        scanf("%s", a);

        for (int i = 0; i < 80; i++) {
            if (a[i] == '\0') {
                break;
            } else if (a[i] == 'O') {
                count ++;
                num += count;
            } else if (a[i] == 'X'){
                count = 0;
            }
        }
        printf("%d\n", num);
        num = 0;
        count = 0;
    }
}