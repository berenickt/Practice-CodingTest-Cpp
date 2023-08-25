#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/** lower_bound()로 나오는 이터레이터가 어떤 값을 갖는지 확인
 * 바로 확인은 안되고 &*를 통해 확인 가능
 *
 * cf. 주소값은 실행환경에 따라 달라질 수 있습니다.
 * 이런식으로 어떤 주소값을 반환하는 것을 알 수 있습니다.
 * 다음 그림처럼 배열에 쌓아진 요소들은 각각의 주소값을 가지고 있습니다.
 * 이 주소값을 기반으로 몇번째 요소인지를 뽑아낼 수 있죠
 */
int main() {
  vector<int> a{1, 2, 3, 3, 3, 4};

  cout << &*lower_bound(a.begin(), a.end(), 3) << "\n";
  cout << &*a.begin() << "\n";
  cout << &*(a.begin() + 1) << "\n";

  return 0;
}
/*
0xd21518
0xd21510
0xd21514
*/