#include <bits/stdc++.h>
using namespace std;

/** 재귀함수
 * 재귀함수란 아래의 3가지 특징을 가진 함수를 말합니다.
 * - 재귀함수(Recursion)는 정의 단계에서 자신을 재참조하는 함수
 * - 전달되는 상태인 매개변수가 달라질 뿐 똑같은 일을 하는 함수
 * - 큰 문제를 작은 부분문제로 나눠서 풀 때 사용합니다.
 *
 * e.g.) 팩토리얼(factorial)은 1부터 해당 항까지 곱하는 함수입니다.
 * 이를 재귀함수로 구현하면 다음과 같습니다
 * n! = n * (n - 1) * (n - 2) * ... * 1
 */
int fact_rec(int n) {
  if (n == 1 || n == 0)
    return 1; // 1! = 0! = 1
  return n * fact_rec(n - 1);
}

int fact_for(int n) {
  int ret = 1;
  for (int i = 1; i <= n; i++)
    ret *= i;
  return ret;
}

int n = 5;
int main() {
  cout << fact_for(n) << '\n'; // 120
  cout << fact_rec(n) << '\n'; // 120
  return 0;
}
