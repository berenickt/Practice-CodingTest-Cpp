#include <bits/stdc++.h>
using namespace std;
const int mxy = 3;
const int mxx = 4;
int a[mxy][mxx];

// **** 2차원배열과 탐색을 빠르게 하는 팁
int main() {
  for (int i = 0; i < mxy; i++) {
    for (int j = 0; j < mxx; j++) {
      a[i][j] = (i + j);
    }
  }

  /**** good
   * 첫번째 차원 >> 2번째 차원 순으로 탐색하는게 성능이 좋음
   * 이는 C++에서 캐시를 첫번째 차원(여기서는 y가 되겠죠?) 를 기준으로 하기 때문에
   * 캐시관련 효율성 때문에 탐색을 하더라도 순서를 지켜가며 해주는게 좋음
   */
  for (int i = 0; i < mxy; i++) {
    for (int j = 0; j < mxx; j++) {
      cout << a[i][j] << ' ';
    }
    cout << '\n';
  }

  // /**** bad
  for (int i = 0; i < mxx; i++) {
    for (int j = 0; j < mxy; j++) {
      cout << a[j][i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
/*
0 1 2 3
1 2 3 4
2 3 4 5
0 1 2
1 2 3
2 3 4
3 4 5
*/