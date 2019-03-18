#include <cstdio>
#include <cstring>

int main() {
    int a, b, c, d;
    char data[1000];
    int count[1000] = {0,};

    scanf("%d %d %d", &a, &b, &c);

    d = a*b*c;

    sprintf(data, "%d", d);

    for (int i=0; i<10; i++) {
        for (int j=0; j<strlen(data); j++) {
            if ((int)data[j] == i) {
                count[i]++;
            }
        }
        printf("%d\n", count[i]);
    }
    return 0;
}