#include <cstdio>

int main() {
    int a[5], b[6], grade=20;

    for (int i=0; i<5; i++) {
        scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);

        b[i] = a[0]+a[1]+a[2]+a[3];
    }

    for (int j=0; j<5; j++) {
        if (b[j] >= grade) {
            printf("%d %d", j+1, grade);
            break;
        } else {
            grade--;
        }
    }
}