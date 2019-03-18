#include <cstdio>

int main() {
  int r, t, j, cnt;
  char s[21];

  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    scanf("%d %s", &r, s);
    j = 0;
    while (s[j] != '\0') {
      cnt = r;
      while (cnt != 0) {
        printf("%c", s[j]);
        cnt--;
      }
      j++;
    }
    printf("\n");
  }
}