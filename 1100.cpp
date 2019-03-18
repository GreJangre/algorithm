//
// Created by 임성주 on 2019-02-14.
// 하얀 칸
//

#include <cstdio>

int main() {
  char chess[9];
  int cnt = 0;

  for (int i = 1; i <= 8; i++) {
    scanf("%s", chess);
    if (i % 2 == 0) {
      for (int j = 1; j <= 8; j += 2) {
        if (chess[j] == 'F') cnt++;
      }
    } else {
      for (int j = 0; j < 8; j += 2) {
        if (chess[j] == 'F') cnt++;
      }
    }
  }

  printf("%d", cnt);

  return 0;
}