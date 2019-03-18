#include <cstdio>
#include <cstring>

int main() {
  char a[100002], b[100002];

  scanf("%s %s", a, b);

  for (int i = 0; i < strlen(a); ++i) {
    printf("%d", a[i]);
  }
}