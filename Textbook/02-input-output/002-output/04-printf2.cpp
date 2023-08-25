#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
double a = 1.23456789;
int b = 12;
int c = 2;

/**
 * printf의 출력형식을 이용해
 * 소수점 6자리까지
 * 그리고 2를 02,
 * 또는 12는 12 이런식으로 출력한다면?
 */
int main() {
  printf("%.6lf\n", a);
  printf("%02d\n", b);
  printf("%02d\n", c);
  return 0;
}
/*
1.234568
12
02
*/