#include <bits/stdc++.h>
using namespace std;

/** double을 int형으로 만들기
 * double형인 변수의 앞에다가 int로 선언해주기만 하면 됩니다
 * 중요한 점이 있는데 같은 타입끼리 연산을 하는 것이 중요
 * ret이란 double 타입에 n을 double로 만들어서 연산하는 것을 볼 수 있습니다
 *
 * double은 double끼리 나눠야 합니다.
 * int를 double로 나누면 double 타입의 결과값이 나오는데
 * 이를 코딩테스트 때 신경쓰기란 어려움

 * 차라리 double은 double 끼리 연산하고
 * int는 int끼리 연산하게 타입변환을 해놓고 연산이 편함
 */
int main() {
  double ret = 2.12345;
  int n = 2;
  int a = (int)round(ret / double(n));

  cout << a << "\n";
  return 0;
}

/** cf.) 암시적 형변환(Implicit type conversion)
 * 산술표현식을 평가할 때 같은 타입을 가져야 하나,
 * 이게 맞지 않을 경우 암시적 형변환이 일어남
 * 이 때 다음과 같은 우선순위를 거쳐 형변환이 일어남
 *
 * 우선순위는 다음과 같습니다.
 * - long double (highest)
 * - double
 * - float
 * - unsigned long long
 * - long long
 * - unsigned long
 * - long
 * - unsigned int
 * - int (lowest)
 */