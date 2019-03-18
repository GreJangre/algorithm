#include <cstdio>
#include <stdlib.h>


int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
        return -1;

    if (num1 > num2)
        return 1;

    return 0;
}

int main() {

    int a[10], b;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < 9; j++) {

    }


//    qsort(a, sizeof(a) / sizeof(int), sizeof(int), compare);
}