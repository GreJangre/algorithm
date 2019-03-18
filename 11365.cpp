#include <cstdio>
#include <cstring>

int main() {
  char a[501];
  int b;

  for (int i = 0; ; i++) {
    scanf(" %[^\n]", a);

    if (a[0] == 'E' && a[1] == 'N' && a[2] == 'D') {
      break;
    }

    for (int j = (int)strlen(a) - 1; j >= 0; j--) {
      printf("%c", a[j]);
    }

    printf("\n");
  }
}