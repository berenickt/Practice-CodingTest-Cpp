#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
double a = 1.23456789;

/*** cout의 실수 타입 출력
 * cout은 기본적으로 실수를 출력하면 일부분만 출력됨
 * 소수자리 6자리까지 반올림해서 출력해야 한다면?
 * 📌 cout.precision(자릿수 + 1);
 */
int main() {
  cout << a << "\n";  // 1.23457

  cout.precision(7);
  cout << a << "\n";  // 1.234568
  return 0;
}