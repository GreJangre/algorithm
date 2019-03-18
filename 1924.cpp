#include <cstdio>

int main() {
    int x=0, y=0, days=0;
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    scanf("%d %d", &x, &y);

    for (int i=0; i<x-1; i++) {
       days += month[i];
    }

    if ((days + y)%7 == 1) {
        printf("MON");
    } else if ((days + y)%7 == 2) {
        printf("TUE");
    } else if ((days + y)%7 == 3) {
        printf("WED");
    } else if ((days + y)%7 == 4) {
        printf("THU");
    } else if ((days + y)%7 == 5) {
        printf("FRI");
    } else if ((days + y)%7 == 6) {
        printf("SAT");
    } else {
        printf("SUN");
    }

    return 0;
}