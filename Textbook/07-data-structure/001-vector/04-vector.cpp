#include <bits/stdc++.h>
using namespace std;
vector<int> v{10, 20, 30, 40, 50};

/**
 * vector의 정적할당 또 다른 방법
 */
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i : v) {
    cout << i << " "; // 10 20 30 40 50
  }

  return 0;
}
