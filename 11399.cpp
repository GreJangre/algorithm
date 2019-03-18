#include <cstdio>

int main() {
    int n, count, root=0, sum=0;

    scanf("%d\n", &n);

    count = n;

    int a[n+1];

    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (int j=0; j<n; j++) {
        for (int k=j; k<n; k++) {
            if (a[k] <= a[j]) {
                root = a[j];
                a[j] = a[k];
                a[k] = root;
            } else { continue; }
        }
        sum += a[j] * count;
        count --;
    }
    printf("%d", sum);
}