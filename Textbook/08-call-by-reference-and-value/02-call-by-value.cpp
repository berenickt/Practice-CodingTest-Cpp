#include <bits/stdc++.h>
using namespace std;

int add(int a, int b) {
  a += 10;
  cout << a << '\n';
  return a + b;
}

/** 값에 의한 호출(call by value)
 * 매개변수로 전달되는 변수를 모두 함수 내부에서 복사해서 함수를 실행하는 방법
 * 함수 내부에서 전체 복사가 일어나고,
 * 실제 변수와는 다른 주소에 할당되기 때문에
 * 실제 변수와 매개변수로 전달된 변수는 다른 주소값을 가집니다.
 * 즉, 함수 내부에서 이 복사본이 변경되더라도 원본값은 변경되지 않습니다.
 *
 * 다음 코드를 보면 a를 넘겨서 a에 += 10을 했습니다.
 * 함수 내부에서는 11이 찍힐지언정, 원본변수인 main() 함수의 a는 수정되지 않습니다
 */
int main() {
  int a = 1;
  int b = 2;
  int sum = add(a, b); // 11
  cout << a << '\n';   // 1
  return 0;
}