#include <cstdio>

int main() {
  int a, b, c, j = 0, k = 0, l = 0, gen = 0;

  scanf("%d %d %d", &a, &b, &c);

  for (int i = 0; ; i++) {
    j++, k++, l++, gen++;

    if (j == 16) {
      j -= 15;
    }
    if (k == 29) {
      k -= 28;
    }
    if (l == 20) {
      l -= 19;
    }
    if (a == j && b == k && c == l) {
      break;
    }
  }

  printf("%d", gen);
}