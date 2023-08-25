#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int b[3][3];

/** 2차원 배열 대칭
 * 1 2 3
 * 4 5 6
 * 7 8 9
 * 라는 2차원 배열을
 * 1 4 7
 * 2 5 8
 * 3 6 9
 * 로 대칭시켜야 한다면 똑같은 크기의 배열을 하나 준비해서 j, i 이런식으로 담으면 됩니다
 */
int main() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      b[j][i] = v[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << b[i][j] << " ";
    }
    cout << '\n';
  }

  return 0;
}
/*
1 4 7
2 5 8
3 6 9
*/