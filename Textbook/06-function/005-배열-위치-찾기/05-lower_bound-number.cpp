#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> a{1, 2, 3, 3, 3, 3, 4, 100};

// 이를 응용해서 숫자 3이 몇개 들어가 있는지도 확인 가능
int main() {
  cout << upper_bound(a.begin(), a.end(), 3) - lower_bound(a.begin(), a.end(), 3) << "\n"; // 4

  return 0;
}
