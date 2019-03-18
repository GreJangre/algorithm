//
// Created by 임성주 on 2019-02-13.
// 1로 만들기
//

#include <cstdio>
#include <cstring>

#define min(a, b) (((a) < (b)) ? (a) : (b))
int value[1000001];

int fib(int x) {
  if (x < 2) return 0;
  if (x % 3 == 0) {
    return value[x] = min(fib(x / 3) + 1, fib(x - 1) + 1);
  }
  if (x % 2 == 0) {
    return value[x] = min(fib(x / 2) + 1, fib(x - 1) + 1);
  }
  if (x % 6 != 0) {
    return value[x] = fib(x - 1) + 1;
  }
}

int main() {
  int n;

  scanf("%d", &n);

  printf("%d", fib(n));

}