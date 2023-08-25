#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 다음코드처럼도 할 수 있습니다. (이 방법은 보통은 사용되지는 않습니다.
int main() {
  vector<int> a{1, 2, 3, 3, 3, 4};
  cout << &*lower_bound(a.begin(), a.end(), 3) - &*a.begin() << "\n"; // 2

  vector<int> b{0, 0, 0, 0};
  cout << &*(b.begin() + 3) - &*b.begin() << '\n'; // 3
  return 0;
}
