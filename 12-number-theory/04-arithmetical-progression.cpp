#include <bits/stdc++.h>
using namespace std;

/** 등차수열의 합
 * 먼저 1부터 시작해 1씩 증가하는 수열의 합,
 * 즉 1, 2, 3, 4, 5..의 합의 경우 아래와 같은 식으로 구할 수 있습니다.
 *
 * n(n+1) / n
 *
 * e.g.) n = 5일 때의 등차수열의 합은 다음과 같습니다
 * for문을 사용하지 않고 O(1)만에 등차수열의 합을 구하는 것을 볼 수 있습니다
 *
 */
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n = 5;
  int ret = 0;

  for (int i = 1; i <= n; i++) {
    ret += i;
  }

  cout << ret << '\n';             // 15
  cout << n * (n + 1) / 2 << '\n'; // 15
  return 0;
}
