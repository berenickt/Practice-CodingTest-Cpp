#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
  if (n <= 1)
    return 0;
  if (n == 2)
    return 1;
  if (n % 2 == 0)
    return 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

/**
 * 앞의 코드는 배열의 크기가 필요하기 때문에
 * 배열의 크기가 일정 수준(1000만 이상)을 벗어나면 쓰기가 힘듭니다.
 * 이럴 때는 일일히 소수를 판별하는 bool 함수를 만들어야 합니다
 */
int main() {
  for (int i = 1; i <= 20; i++) {
    if (check(i)) {
      cout << i << "는 소수입니다.\n";
    }
  }
  return 0;
}
/*
2는 소수입니다.
3는 소수입니다.
5는 소수입니다.
7는 소수입니다.
11는 소수입니다.
13는 소수입니다.
17는 소수입니다.
19는 소수입니다.
*/
