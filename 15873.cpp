#include <cstdio>

int main() {
    int a;

    scanf("%d", &a);

    if (a%10 > 0) {
        printf("%d", (a-a%10)/10 + a%10);
    } else {
        printf("%d", (a-10)/100 + 10);
    }

    return 0;
}