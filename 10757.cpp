#include <cstdio>
#include <cstring>

int main() {
  char a[100001], b[100001], *longest, *shortest;
  int i = 0, cnt = 0, carry = 0, result[10002], i_len;

  scanf("%s %s", a, b);

  if (strlen(a) > strlen(b)) {
    longest = a;
    shortest = b;

    for (i = (int)strlen(longest) - 1; i >= 0; i--) {
      if (i - (int)(strlen(longest) - strlen(shortest)) >= 0) {
        if ((b[i - (strlen(longest) - strlen(shortest))] - '0') + (a[i] - '0') + carry >= 10) {
          result[cnt] = (b[i - (int)(strlen(longest) - strlen(shortest))] - '0') + (a[i] - '0') - 10 + carry;
          carry = 1;
          cnt++;
          if (i == 0) {
            result[cnt] = carry;
          }
        } else {
          result[cnt] = (b[i - (int)(strlen(longest) - strlen(shortest))] - '0') + (a[i] - '0') + carry;
          carry = 0;
          if (i != 0) {
            cnt++;
          }
        }
      } else {
        if ((a[i] - '0') + carry >= 10) {
          result[cnt] = (a[i] - '0') - 10 + carry;
          carry = 1;
          cnt++;
          if (i == 0) {
            result[cnt] = carry;
          }

        } else {
          result[cnt] = (a[i] - '0') + carry;
          carry = 0;
          if (i != 0) {
            cnt++;
          }
        }
      }
    }
  } else {
    longest = b;
    shortest = a;

    for (i = (int) strlen(longest) - 1; i >= 0; i--) {
      if (i - (int) (strlen(longest) - strlen(shortest)) >= 0) {
        if ((b[i] - '0') + (a[i - (int) (strlen(longest) - strlen(shortest))] - '0') + carry >= 10) {
          result[cnt] = (b[i] - '0') + (a[i - (int) (strlen(longest) - strlen(shortest))] - '0') - 10 + carry;
          carry = 1;
          cnt++;
          if (i == 0) {
            result[cnt] = carry;
          }
        } else {
          result[cnt] = (b[i] - '0') + (a[i - (int) (strlen(longest) - strlen(shortest))] - '0') + carry;
          carry = 0;
          if (i != 0) {
            cnt++;
          }
        }
      } else {
        if ((b[i] - '0') + carry >= 10) {
          result[cnt] = (b[i] - '0') - 10 + carry;
          carry = 1;
          cnt++;
          if (i == 0) {
            result[cnt] = carry;
          }

        } else {
          result[cnt] = (b[i] - '0') + carry;
          carry = 0;
          if (i != 0) {
            cnt++;
          }
        }
      }
    }
  }

  for (int j = cnt; j >= 0; j--) {
    printf("%d", result[j]);
  }
}