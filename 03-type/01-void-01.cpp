/** 기본적인 타입 종류
 * void, char, string, bool, int, long long, double, unsigned long long
 * cf.) long double 등 '조금은' 더 있지만 이 정도만 8가지만 배워도 충분
 */
#include <bits/stdc++.h>
using namespace std;
int ret = 1;

// **** 📌 1. void : 리턴하는 값이 없다.
// a라는 함수가 ret을 바꾸고 아무것도 리턴하지 않음을 보여줍니다.
// 이렇게 아무것도 리턴하지 않는 함수에는 void로 선언
void a() {
  ret = 2;
  cout << ret << "\n";
  return;
}

int main() {
  a();
  return 0;
}
