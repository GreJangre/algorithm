#include <cstdio>
#include <cstring>

int main() {
  char a[101];
  int cnt = 0;

  scanf("%s", a);

  for (int i = 0; i < (int)strlen(a); ++i) {
    if (a[i] == '-' || a[i] == '=') {
      continue;
    } else if (a[i] == 'l' && a[i+1] == 'j') {
      continue;
    } else if (a[i] == 'n' && a[i+1] == 'j') {
      continue;
    } else if (a[i] == 'd' && a[i+1] == 'z' && a[i+2] == '=') {
      cnt++;
      i = i + 2;
    } else {
      cnt++;
    }
  }
  printf("%d", cnt);
}