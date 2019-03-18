#include <cstdio>

int main() {
  int x, binary, cnt = 0;

  scanf("%d", &x);

  while (x != 0) {
    binary = x % 2;
    x = x / 2;

    if (binary == 1) {
      cnt++;
    }
  }

  printf("%d", cnt);

  return 0;
}