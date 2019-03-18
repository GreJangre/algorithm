//
// Created by 임성주 on 2019-02-14.
// 알파벳 개수
//

#include <cstdio>
#include <cstring>

int main() {
  char alpha[101];
  int cnt[27] = {0,};

  scanf("%s", alpha);

  for (int i = 0; i < strlen(alpha); i++) {
    cnt[alpha[i] - 97] += 1;
  }

  for (int j = 0; j < 26; j++) {
    printf("%d ", cnt[j]);
  }
}

