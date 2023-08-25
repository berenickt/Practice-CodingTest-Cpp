#include <bits/stdc++.h>
using namespace std;
int i;

/** 📌 & 연산자(ampersand, 앰퍼샌드)
 * 메모리 주소는 16진수로 표기가 되고,
 * C++에서는 &연산자(ampersand, 앰퍼샌드)를 통해
 * 변수의 메모리 주소를 얻을 수 있습니다.
 * 
 * cf.)
 * OS, 실행시간 등에 따라 주소할당이 달라지기 때문에 주소는 달라집니다.
 */
int main() {
  cout << &i << '\n'; // 0x100bbc000
  return 0;
}
