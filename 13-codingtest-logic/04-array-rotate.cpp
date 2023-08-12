#include <bits/stdc++.h>
using namespace std;

/**
 * 시계방향은 어떻게 해야할까요?
 * 앞서 설명한 반시계방향과 같이 하되
 * begin(), end() 가 아니라 rbegin(), rend()를 사용하면 됩니다
 *
 * begin()은 배열의 0번째부터 시작하는 것이라면
 * rbegin()은 배열의 마지막번째를 나타내는 이터레이터이며
 * rend()는 오른쪽부터 시작해 배열의 시작 전의 위치를 나타내는 이터레이터입니다
 */
int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6};
  rotate(v.rbegin(), v.rbegin() + 1, v.rend());

  for (int i : v)
    cout << i << ' '; // 6 1 2 3 4 5
}
