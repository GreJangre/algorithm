#include <cstdio>

int main() {
    char a[101];

    scanf("%s", a);

    printf("%c", a[0]);

    for (int i=0; ; i++) {
        if (a[i] == '\0') {
            break;
        } else if (a[i] == '-') {
            printf("%c", a[i+1]);
        } else {
            continue;
        }
    }
}