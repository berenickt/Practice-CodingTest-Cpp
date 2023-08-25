#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> a{1, 2, 3, 3, 4, 100};

// lower_bound가 가리키는 요소를 출력할 수도 있습니다
int main() {
  cout << *lower_bound(a.begin(), a.end(), 100) << "\n"; // 100
  return 0;
}
