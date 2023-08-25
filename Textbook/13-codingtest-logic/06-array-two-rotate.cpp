#include <bits/stdc++.h>
using namespace std;
const int n = 3;
const int m = 4;

void rotate_left_90(vector<vector<int>> &key) {
  int n = key.size();
  int m = key[0].size();
  vector<vector<int>> temp(m, vector<int>(n, 0));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      temp[i][j] = key[j][m - i - 1];
    }
  }
  key.resize(m);
  key[0].resize(n);
  key = temp;
  return;
}

void rotate_right_90(vector<vector<int>> &key) {
  int n = key.size();
  int m = key[0].size();
  vector<vector<int>> temp(m, vector<int>(n, 0));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      temp[i][j] = key[n - j - 1][i];
    }
  }
  key.resize(m);
  key[0].resize(n);
  key = temp;
  return;
}

/** 2차원배열을 90도 회전시켜야 하는 경우
 * 2차원배열을 왼쪽 혹은 오른쪽으로 돌려야 하는 경우에는
 * Array로 하는 것은 힘들고 vector를 기반으로 하는게 좋습니다
 */
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  vector<vector<int>> a = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
  };
  rotate_right_90(a);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << '\n';
  }
  return 0;
}