#include <bits/stdc++.h>
using namespace std;

// **** 아무것도 반환하지 않는 void가 아닌
// **** double 타입을 반환하는 함수는 어떻게 정의?
// a()라는 함수는 double 타입으로 정의됨
// 1.2333 이라는 double 타입의 변수를 return
double a() { return 1.2333; }

/**
 * 또한 함수를 선언할 때는 항상 호출되는 위쪽 부분에 선언을 해야 합니다.
 * 👆 코드를 보면 a()라는 함수를 위에 선언했고 main에서 a()라는 함수를 호출
 */
int main() {
  double ret = a();
  cout << ret << "\n";
  return 0;
}
