#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
map<string, string> mp2;

/***
 * 다만 앞의 코드는 문제에서 해당 키에 0이 아닌 값이 들어갈 때 활용이 가능합니다.
 * 이미 if문 안에 mp[1] == 0을 해버린 순간 mp[1] = 0이 할당되어버리기 때문
 * 문제에서 0이 들어가는 것을 비교하기 귀찮다면 다음 코드를 기반으로 작성
 */
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  if (mp.find(1) == mp.end()) {
    mp[1] = 2;
  }

  for (auto i : mp)
    cout << i.first << " " << i.second; // 1 2

  return 0;
}
