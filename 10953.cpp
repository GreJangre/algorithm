#include <cstdio>

int main() {
    int a,b,count;
    char c = ',';

    scanf("%d", &count);

    for (int i=0; i<count; i++) {
        scanf("%d %c %d", &a, &c, &b);

        printf("%d\n", a+b);
    }
}