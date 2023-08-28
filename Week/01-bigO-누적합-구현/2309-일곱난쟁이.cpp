#include <bits/stdc++.h>
using namespace std;
int a[9];

/** 일곱난쟁이
 * @copyright https://www.acmicpc.net/problem/2309
 * 1. 일곱 난쟁이의 키의 합이 100이 됨
 * 2. 아홉 난쟁이의 키가 주어졌을 때,
 * -- 백설공주를 도와 일곱 난쟁이를 찾는 프로그램
 * ==> 9_P_7 = 9! / 2!
 */
int main() {
  // cin을 cout으로 부터 풀어준다.(untie)
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  // 입력받음
  for (int i = 0; i < 9; i++) {
    cin >> a[i];
  }

  // 오름차순
  sort(a, a + 9);

  do {
    int sum = 0;
    for (int i = 0; i < 7; i++) sum += a[i];
    if (sum == 100) break;
  } while (next_permutation(a, a + 9));

  // 해당부분 출력
  for (int i = 0; i < 7; i++) cout << a[i] << "\n";

  return 0;
}