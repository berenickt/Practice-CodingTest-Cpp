#include <bits/stdc++.h>
using namespace std;

int a = 1;
/** auto 타입
 * 타입추론을 하여 결정되는 타입
 * b라는 변수를 auto로 선언했는데
 * rvalue가 1인 것을 통해
 * 자동적으로 int 타입의 변수를 선언했듯이 쓸 수 있음
 */
auto b = 1;

int main() {
  cout << b << '\n';  // 1
}