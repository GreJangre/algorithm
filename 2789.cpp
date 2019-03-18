#include <cstdio>
#include <cstring>

int main() {
    char b[101];

    scanf("%s", b);

    for (int i=0; i<100; i++) {
            if (b[i] == 'C' || b[i] == 'A' || b[i] =='M' || b[i] == 'B' || b[i] == 'R' || b[i] == 'I' || b[i] == 'D' || b[i] == 'G' || b[i] =='E') {
                memmove(b + i, b + i + 1, strlen(b) - i);
                i--;
        }
    }
    printf("%s", b);

    return 0;
}