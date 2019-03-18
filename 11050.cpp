#include <cstdio>

int main() {
  int n, k, n_mul = 1, k_mul = 1, n_k_mul = 1, result;

  scanf("%d %d", &n, &k);

  for (int i = 1; i <= n; i++) {
    n_mul *= i;
  }

  for (int j = 1; j <= k; j++) {
    k_mul *= j;
  }

  for (int l = 1; l <= (n - k); l++) {
    n_k_mul *= l;
  }

  result = n_mul / (k_mul * n_k_mul);

  printf("%d", result);

  return 0;
}