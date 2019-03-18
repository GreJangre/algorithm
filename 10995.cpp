//
// Created by 임성주 on 2019-02-14.
// 별 찍기 - 20
//
#include <cstdio>

int main() {
  int n;

  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
      for (int j = 0; j < n; j++) {
        if (i % 2 == 1) {
          printf("* ");
        } else {
          printf(" *");
      }
    }

    printf("\n");
  }
}