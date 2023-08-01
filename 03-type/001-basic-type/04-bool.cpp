#include <bits/stdc++.h>
using namespace std;

/** 📌 4. bool, 참과 거짓
 * 1바이트, true또는 false 입니다.
 * 1 또는 0으로 선언해도 무방
 *
 * cf. C++에서는
 * 0이면 false, 0이 아닌 값들은 모두 true가 되며
 * bool()을 통해 간단하게 bool형으로 형변환이 가능
 */
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a = -1;
  cout << bool(a) << "\n";  // 1

  a = 0;
  cout << bool(a) << "\n";  // 0

  a = 3;
  cout << bool(a) << "\n";  // 1
}
