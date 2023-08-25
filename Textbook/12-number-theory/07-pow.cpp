#include <bits/stdc++.h>
using namespace std;

/**
 * 승수를 구하는 로직이 필요할 때가 있습니다.
 * 2의 2승, 3승 이런 로직 말이죠.
 * 그럴 땐 pow()를 사용하면 됩니다
 */
int main() {
  int n = 4;
  int pow_2 = (int)pow(2, n);
  cout << pow_2 << '\n'; // 16
  return 0;
}

/** pow() 함수
 * pow() 함수는 다음 코드 처럼 double형 인자를 2개를 받고
 * 기본적으로 double을 반환해줍니다
 *
 * pow(double base, double exponent);
 * 따라서 int형으로 사용하고 싶다면 (int)로 형변환을 꼭 해주는게 중요합니다
 */