#include <bits/stdc++.h>
using namespace std;
int i;
string s = "berenickt";

/** 포인터 정의 => 변수의 메모리 주소를 담는 타입
 * `<타입> *` 형태로 포인터를 정의
 * C++에서 *라는 별표는 `에스터리스크(asterisk operator)`라고도 불립니다
 */
int main() {
  i = 0;

  // 📌 `<타입> *  <변수명> = <해당 타입의 변수의 주소>`
  // `int *a`는 `&i`라는 `i의 주소를 담는 포인터`를 정의한 것
  int *a = &i;
  cout << a << '\n';  // 0x102cd4000

  // string 타입 변수의 메모리주소를 담을 때는 `string *` 하고 선언을 해야 함
  string *b = &s;
  cout << b << '\n';  // 0x102cd4008
  return 0;
}
