#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
map<string, string> mp2;

// 맵에 요소가 있는지 없는지를 확인하고 맵에 요소를 할당하는 로직
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  if (mp[1] == 0) {
    mp[1] = 2;
  }

  for (auto i : mp)
    cout << i.first << " " << i.second; // 1 2
  return 0;
}
