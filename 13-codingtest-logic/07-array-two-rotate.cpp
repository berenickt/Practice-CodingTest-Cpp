#include <bits/stdc++.h>
using namespace std;
const int n = 3;

void rotate_right_90(vector<vector<int>> &key) {
  vector<vector<int>> temp(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      temp[i][j] = key[n - j - 1][i];
    }
  }
  key = temp;
  return;
}

/**
 * 앞의 코드는 n과 m이 다를 때의 코드입니다.
 * resize()는 vector의 크기를 재할당하는 메서드입니다.
 * 이 때 n과 m이 같다면 resize()부분이 사라지므로 다음코드처럼 더 간단해집니다.
 * 만약 외우기 힘들다면 이 코드, rotate_right_90만이라도 외워주는게 좋습니다.
 * cf. i, j = n - j - 1, i 라고 반복하면서 외우면 쉽습니다
 */
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  vector<vector<int>> a = {
      {1, 2, 3},
      {5, 6, 7},
      {9, 10, 11},
  };
  rotate_right_90(a);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << '\n';
  }
  return 0;
}