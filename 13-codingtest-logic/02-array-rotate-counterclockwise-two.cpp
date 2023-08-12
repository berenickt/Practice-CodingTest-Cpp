#include <bits/stdc++.h>
using namespace std;
vector<int> v;

/**
 * 2칸을 이동한다면?
 * 코드처럼 begin()부터 begin() + 2를 하면 됩니다.
 * 전체를 기반으로 k칸을 이동하고 싶다면,
 * begin() + k 이런식으로 집어넣으면 됩니다
 */
int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6};
  rotate(v.begin(), v.begin() + 2, v.end());

  for (int i : v)
    cout << i << ' '; // 3 4 5 6 1 2
}
