#include <bits/stdc++.h>
using namespace std;

int main() {
  /**
   * auto 타입은 주로 복잡하고 긴 타입의 변수명을 대신할 때 쓰입니다
   * pair<int, int> it가 아닌
   * auto it로 조금 더 짧게 선언할 수 있습니다
   */
  vector<pair<int, int>> v;

  for (int i = 1; i <= 5; i++) {
    v.push_back({i, i});
  }

  // **** auto
  for (auto it : v) {
    cout << it.first << " : " << it.second << '\n';
  }
  // 1 : 1
  // 2 : 2
  // 3 : 3
  // 4 : 4
  // 5 : 5

  for (pair<int, int> it : v) {
    cout << it.first << " : " << it.second << '\n';
  }
  // 1 : 1
  // 2 : 2
  // 3 : 3
  // 4 : 4
  // 5 : 5

  return 0;
}
