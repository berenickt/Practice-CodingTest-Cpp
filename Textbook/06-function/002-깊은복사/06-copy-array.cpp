#include <bits/stdc++.h>
using namespace std;
int n = 3;

/**
 * 만약 Array v의 크기가 5라면 copy(v, v + 5, ret) 이런식의 코드가 되겠죠?
 * +숫자는 해당 배열의 크기인 것을 주의해주세요.
 */
int main(void) {
  int v[n] = {1, 2, 3};
  int ret[n];
  copy(v, v + n, ret);

  cout << ret[1] << "\n";

  ret[1] = 100;

  cout << ret[1] << "\n";
  cout << v[1] << "\n";

  return 0;
}
/*
2
100
2
*/