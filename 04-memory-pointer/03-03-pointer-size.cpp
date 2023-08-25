#include <bits/stdc++.h>
using namespace std;
double a = 4.4;
int c = 10;

/** 포인트의 크기
 * 포인트의 크기는 실행 OS체제의 bit마다 다르다 (e.g. 64bit, 32bit)
 * 64bit에서 포인터는 8bit
 * 32bit에서 포인터는 4bit
 */
int main() {
  double *b = &a;
  int *d = &c;

  cout << sizeof(b) << '\n';  // 8
  cout << sizeof(d) << '\n';  // 8
  return 0;
}
