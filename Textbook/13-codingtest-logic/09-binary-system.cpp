#include <bits/stdc++.h>
using namespace std;
vector<int> v;

/**
 * 어떤 숫자 n에서 이를 b진법으로 어떻게 바꿀 수 있을까요?
 * 2진법을 만들 때 나누기를 하고 몫을 이용하죠?
 * 아래의 코드는 10진법을 2진법으로 바꾸는 코드입니다.
 * 여기서 b를 3으로 바꾸면 10진법을 3진법으로 바꾸는 방법이 됩니다.
 * 진법들을 테스팅해가면서 익히면 됩니다
 */
int main() {
  int n = 100;
  int b = 2;
  while (n > 1) {
    v.push_back(n % b);
    n /= b;
  }
  if (n == 1)
    v.push_back(1);
  reverse(v.begin(), v.end());
  for (int a : v) {
    // if(a >= 10) 이 조건은 16진법 변환을 위해 필요함.
    // (16진법 : 0 ~ F로 표현하는 방법)
    if (a >= 10)
      cout << char(a + 55);
    else
      cout << a;
  }
  return 0;
}