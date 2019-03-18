#include <cstdio>

int n, arr[501][501], value[501][501];

#define max(a, b) (((a) > (b)) ? (a) : (b))

int fib(int x, int y) {
  if (n == x) return arr[x][y];
  if (value[x][y] != 0) return value[x][y];
  return value[x][y] = max(fib(x+1, y+1), fib(x+1, y)) + arr[x][y];
}

int main() {

  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  printf("%d", fib(1, 1));

  return 0;
}