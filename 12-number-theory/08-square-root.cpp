#include <bits/stdc++.h>
using namespace std;

/** 제곱근 구하기
 * 예를 들어 9의 제곱근은 3이며 16의 제곱근은 4입니다.
 * sqrt 함수로 구현할 수 있습니다
 */
int main() {
  int n = 16;
  int ret = (int)sqrt(n);
  cout << ret << '\n'; // 4
  return 0;
}

/**
 * 이는 기본적으로 double형을 매개변수로 받고 double형을 리턴합니다.
 * sqrt(double num);
 * 따라서 int형으로 사용하고 싶다면 (int)로 형변환을 꼭 해주는게 중요합니다
 */