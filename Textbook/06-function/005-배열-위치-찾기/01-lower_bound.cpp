/** lower_bound() 와 upper_bound()
 * 정렬된 배열에서
 * 어떤 값이 나오는 첫번째 지점 또는 초과하는 지점의 위치를 찾으려면?
 * 또한 이분탐색을 쉽게 함수로 구현하려면?
 *
 * 이 함수들은 꼭 정렬된 배열에서만 써야 합니다.
 * 정렬되지 않은 배열을 기반으로 하게 되면 예상하지 못한 결과가 나오게 됩니다.
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  vector<int> a{1, 2, 3, 3, 3, 4};

  cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << "\n"; // 2
  cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << "\n"; // 5

  return 0;
}

/** 숫자 3을 찾는다고 했을 때
 * lower_bound()는 2, upper_bound()는 5를 반환함
 * 3이 시작되는 최소 시작점은 lower_bound(),
 * 이를 초과하는 지점은 upper_bound()로 찾을 수가 있습니다.
 *
 * a.begin()은 왜 빼나?
 * lower_bound(), upper_bound()는 해당 자료형으로부터 이터레이터를 반환합니다.
 * 따라서 몇번째를 추려내려면 이 이터레이터에서 begin()을 빼주어야 합니다.
 */