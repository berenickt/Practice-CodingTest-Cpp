#include <bits/stdc++.h>
using namespace std;

/**  등차수열의 합 공식을 이용
 * 그렇다면 초항이 3이고 등차가 5, n이 5인 등차수열의 합은 어떻게 구할까요?
 * 3, 8, 13, 18, 23의 합 = 65를 말이죠.
 * 아래와 같은 수식으로 구할 수 있습니다. 등차수열의 합 공식입니다
 *
 * Sn = n( a + l ) / 2
 */
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n = 5;
  int a = 3, l = 23;
  cout << n * (a + l) / 2 << '\n'; // 65
  return 0;
}
