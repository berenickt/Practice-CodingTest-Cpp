#include <bits/stdc++.h>
using namespace std;

/**
 * 등비로 이루어진 배열의 합을 구하라는 로직 나올 수 있습니다
 * 예를 들어 초항이 1이고 r = 2이고
 * n은 4인 배열인 {1, 2, 4, 8} 의 합을 구해봅시다.
 * 다음코드처럼 구할 수 있습니다
 */
int main() {
  int a = 1, r = 2, n = 4;
  vector<int> v;
  cout << a * ((int)pow(2, n) - 1) / (r - 1);
  cout << '\n';

  for (int i = 0; i < n; i++) {
    v.push_back(a);
    a *= r;
  }

  for (int i : v)
    cout << i << ' ';
}
/*
15
1 2 4 8
*/