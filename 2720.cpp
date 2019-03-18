#include <cstdio>

int main() {
    int t, c;

    scanf("%d", &t);

    int m[t][5];

    for (int i=0; i<t; i++) {
        scanf("%d", &c);

        m[i][0] = c/25;
        m[i][1] = c%25/10;
        m[i][2] = c%25%10/5;
        m[i][3] = c%25%10%5/1;
    }

    for (int j=0; j<t; j++) {
        printf("%d %d %d %d\n", m[j][0], m[j][1], m[j][2], m[j][3]);
    }
}