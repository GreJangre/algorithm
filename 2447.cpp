#include <cstdio>

int main() {
  int cycle, cnt = 0;
  char star = '*';

  scanf("%d", &cycle);

  for (int i = cycle; i > 0; i--) {
    for (int j = 1; j < i; j++) {
      printf(" ");
    }
    printf("*");

    for (int k = 0; k < (2 * cnt - 1); k++) {
      printf(" ");
    }

    if (cnt != 0) {
      printf("*");
    }
    cnt++;

    printf("\n");
  }

}