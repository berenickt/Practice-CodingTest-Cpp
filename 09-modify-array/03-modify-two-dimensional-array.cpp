#include <bits/stdc++.h>
using namespace std;

int a[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
void go(int a[][3]) { a[2][2] = 100; }
void go2(int a[3][3]) { a[2][2] = 1000; }

// 2차원 배열 array로 수정하기
int main() {
  go(a);
  cout << a[2][2] << '\n'; // 100
  go2(a);
  cout << a[2][2] << '\n'; // 1000
}
