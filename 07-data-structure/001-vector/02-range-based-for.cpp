#include <bits/stdc++.h>
using namespace std;
vector<int> v{1, 2, 3};

/*** 📌 7. 범위기반 for 루프
 * for(<해당 컨테이너에 들어있는 타입> 임시변수명 : 컨테이너)
 *
 * C++11부터 범위기반 for 루프가 추가되어서 이를 쓸 수 있음
 * vector만 쓸 수 있는 것은 아니고
 * 순회할 수 있는 컨테이너인 vector, Array, map 등도 사용가능
 */
int main() {
  // **** vector<int> 내의 있는 요소들을 탐색한다는 의미
  for (int a : v)
    cout << a << " "; // 1 2 3
  cout << "\n";

  // **** for (int a : v)와 같은 의미
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << ' '; // 1 2 3
  cout << "\n";

  // vector안에 pair가 들어간다면 pair를 써서 범위기반 for루프를 써야 함
  vector<pair<int, int>> v2 = {{1, 2}, {3, 4}};
  for (pair<int, int> a : v2)
    cout << a.first << " "; // 1 3
}
