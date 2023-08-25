#include <bits/stdc++.h>
using namespace std;

/** 역참조 연산자 *
 * c++에서 *는 3가지 역할을 합니다.
 * 1. 곱셈 연산자
 * 2. 포인터
 * 3. 역참조 연산
 */
int main() {
  string a = "abcda";
  string *b = &a;  // b라는 포인터를 정의

  /**
   * 이 포인터에 * 연산자를 통해 역참조를 걸어서,
   * 주소값을 기반으로 값을 끄집어냄
   * => 메모리 변수에 다시 *를 걸어서, 값을 끄집어 내는 것
   */
  cout << b << "\n";   // 0x6ffdf0
  cout << *b << "\n";  // abcda
  return 0;
}
