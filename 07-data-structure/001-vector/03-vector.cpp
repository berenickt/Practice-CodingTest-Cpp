#include <bits/stdc++.h>
using namespace std;
vector<int> v(5, 100);

/** vector의 정적할당
 * vector라고 해서 무조건 크기가 0인 빈 vector를 만들어
 * 동적할당으로 요소를 추가하는 것은 아닙니다.
 * 애초에 크기를 정해놓거나
 * 해당 크기에 대해 어떠한 값으로 초기화 해놓고 시작할 수도 있습니다.
 *
 * 다음은 5개의 요소를 담을 수 있는 vector를 선언하고 모든 값을 100으로 채운 코드
 */
int main() {
  for (int a : v)
    cout << a << " "; // 100 100 100 100 100
  cout << "\n";

  return 0;
}
