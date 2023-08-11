#include <bits/stdc++.h>
using namespace std;

int add(int &a, int b) {
  a += 10;
  cout << a << '\n';
  return a + b;
}

/** 참조에 의한 호출(call by reference)
 * `변수의 주소`를 매개변수로 함수에 전달하는 방법
 *
 * 함수 내부에서 해당 매개변수를 변경하게 되면 실제 원본변수에도 반영됩니다
 * 다음은 매개변수로 &a를 넘겼고 해당 함수에서 a를 수정했고
 * 이 부분이 원본 변수에도 반영된 모습
 */
int main() {
  int a = 1;
  int b = 2;
  int sum = add(a, b); // 11
  cout << a << '\n';   // 11
  return 0;
}
