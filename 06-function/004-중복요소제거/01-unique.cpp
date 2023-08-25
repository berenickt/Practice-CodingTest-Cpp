#include <bits/stdc++.h>
using namespace std;
vector<int> v;
/** 📌 unique
 * 범위안의 있는 요소 중 앞에서부터 서로를 비교해가며,
 * 중복되는 요소를 제거하고 나머지 요소들은 삭제하지 않고 그대로 두는 함수
 * O(n)의 시간복잡도
 */

int main() {
  for (int i = 1; i <= 5; i++) {
    v.push_back(i);
    v.push_back(i);
  }

  for (int i : v) cout << i << " ";

  cout << '\n';
  // 중복되지 않은 요소로 채운 후, 그 다음 이터레이터를 반환한다.
  auto it = unique(v.begin(), v.end());
  cout << it - v.begin() << '\n';

  // 앞에서 부터 중복되지 않게 채운 후 나머지 요소들은 그대로 둔다.
  for (int i : v) cout << i << " ";

  cout << '\n';
  return 0;
}
/*
1 1 2 2 3 3 4 4 5 5
5
1 2 3 4 5 3 4 4 5 5
*/