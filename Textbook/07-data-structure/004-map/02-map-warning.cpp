#include <bits/stdc++.h>
using namespace std;

/** 맵을 쓸 때 주의할 점
 * map의 경우 해당 인덱스에 참조만 해도 맵의 요소가 생기게 됩니다.
 * 만약 map에 해당 키에 해당하는 요소가 없다면
 * 0 또는 빈문자열로 초기화가 되어 할당됩니다.
 * (int는 0, string이나 char은 빈 문자열로 할당됩니다.)
 *
 * 할당하고 싶지 않아도 대괄호[]로 참조할경우
 * 자동으로 요소가 추가가 되기 때문에 조심해야 합니다
 */
map<int, int> mp;
map<string, string> mp2;

int main() {
  ios_base::sync_with_stdio(false);

  cin.tie(NULL);
  cout.tie(NULL);

  cout << mp[1] << '\n'; // 0
  cout << mp2["aaa"] << '\n';

  for (auto i : mp)
    cout << i.first << " " << i.second; // 1 0
  cout << '\n';

  for (auto i : mp2)
    cout << i.first << " " << i.second; // aaa %

  return 0;
}
