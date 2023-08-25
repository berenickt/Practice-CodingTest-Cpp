#include <bits/stdc++.h>
using namespace std;
multiset<int> s;

/** multiset
 * 중복되는 요소도 집어넣을 수 있는 자료구조
 * key, value 형태로 집어넣을 필요도 없고 넣으면 자동적으로 정렬됩니다.
 * 메서드는 map과 같습니다.
 */
int main() {
  for (int i = 5; i >= 1; i--) {
    s.insert(i);
    s.insert(i);
  }

  for (int it : s)
    cout << it << " "; // 1 1 2 2 3 3 4 4 5 5
  cout << '\n';
  return 0;
}
