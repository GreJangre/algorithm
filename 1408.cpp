#include <cstdio>

int main() {
    int a,b,c,d,e,f;

    scanf("%d:%d:%d", &a, &b, &c);
    scanf("%d:%d:%d", &d, &e, &f);

    if (a <= d) {
        printf("%02d:%02d:%02d", ((d-a)*3600 + (e-b)*60 + f - c)/3600, ((d-a)*3600 + (e-b)*60 + f - c)%3600/60, ((d-a)*3600 + (e-b)*60 + f - c)%60);
    } else {
        printf("%02d:%02d:%02d", ((24+d-a)*3600 + (e-b)*60 + f - c)/3600, ((24+d-a)*3600 + (e-b)*60 + f - c)%3600/60, ((24+d-a)*3600 + (e-b)*60 + f - c)%60);
    }

    return 0;
}