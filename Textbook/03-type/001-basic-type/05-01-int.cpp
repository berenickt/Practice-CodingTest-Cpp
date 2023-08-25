#include <bits/stdc++.h>
using namespace std;

/** 📌 5. int, 4바이트짜리 정수
 * 4바이트짜리 정수를 사용할 때 쓰입니다.
 * 표현범위는 -2,147,483,648 ~ 2,147,483,647입니다. 약 20억까지 표현
 * 즉, 코드에 값들의 예상값이 20억을 넘어간다면 int가 아닌 long long 사용
 *
 * 문제를 풀 때는 이상한 문제가 아니라면
 * int의 최대값으로 20억까지가 아닌 987654321 또는 1e9를 사용
 * const int INF = 987654321;
 * const int INF2 = 1e9;
 *
 * INF를 기반으로 INF + INF라는 연산이 일어날 수도 있고 INF * 2, 그리고 INF
 * 다른 수 연산이 일어날 때
 * int의 최대값을 넘어가는 오버플로를 방지할 수 있는 장점
 *
 * 📌 const 키워드
 * 수정할 수 없는 변수를 정할 때 씀
 * 보통 INF 같은 것이나 방향벡터를 나타내는 dy, dx에 const를 씀
 *
 * e.g.) 문제에서 주어진 맵의 크기가 10 * 10 이기 때문에
 * 10 * 10 2차원 배열을 만들어야 할 경우
 *
 * const int mx = 10;
 * int a[mx][mx];
 *
 * 10이라는 숫자는 변하지 않는 상수이기 때문에 “미리” 설정해놓고,
 * 이를 기반으로 맵의 크기를 설정하는 것
 */
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  /**
   * int로 선언한 변수 끼리 연산을 하게 되었을 때
   * 실수가 나온다면 소수점 아래에 있는 수는 모두 버림
   */
  int a = 3;
  int b = 2;
  cout << a / b << '\n';  // 1

  /**
   * 이 현상은 int 타입끼리만 그렇지, double 타입은 버림없이 나옴
   */
  double c = 3;
  double d = 2;
  cout << c / d << '\n';  // 1.5
}