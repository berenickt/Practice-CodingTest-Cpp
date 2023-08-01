#include <bits/stdc++.h>
using namespace std;

/*** typedef
 * 타입의 이름을 새 별칭으로 정의하고, 실제 타입이름 대신 별칭으로 사용
 * C++에서 이미 정의된 타입 또는 사용자가 정의한 타입(struct 또는 class)보다
 * 더 짧거나 의미있는 이름을 지을 수 있음
 *
 * 📌 사용법
 * typedef <타입> <별칭>
 *
 * int라는 타입을 i라는 새로운 별칭으로 바꿔서 표현
 */
typedef int i;

int main() {
  i a = 1;
  cout << a << '\n';
  return 0;
}