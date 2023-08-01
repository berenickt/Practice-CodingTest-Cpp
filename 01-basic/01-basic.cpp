/*** 입력 받은 문자열을 그대로 출력하는 프로그램
 * bits/stdc++.h는 C++의 모든 표준 라이브러리가 포함된 헤더파일
 * include라는 지시문을 통해 이 프로그램에 포함시킨다라는 의미
 */
#include <bits/stdc++.h>

/*** std라는 네임스페이스(namespace)를 사용
 * "네임스페이스"란 많은 라이브러리를 불러서 사용하다보면,
 * 변수명 중복이 발생할 수 있는데,
 * 이를 방지하기 위해서 변수명에 범위를 걸어놓는 것을 의미
 *
 * cin이나 cout 등을 사용할 때,
 * 원래는 std라는 네임스페이스를 통해 std::cin 이렇게 호출을 해야 하는데,
 * std를 기본으로 설정해서 cin, cout으로 호출할 수 있게 합니다.
 */
using namespace std;

/***
 * <타입> <변수명> 이렇게 선언합니다.
 *
 * 📌 string a = “큰돌”
 * a를 lvalue라고 하고, 큰돌을 rvalue라고 정의
 * lvalue는 왼쪽에 정의되며 추후 다시 사용될 수 있는 변수
 * rvalue는 오른쪽에 정의되며 한번쓰고 다시 사용되지 않을 변수
 */
string a;

int main() {
  cin >> a;           // 변수 a를 입력받다.
  cout << a << "\n";  // 변수 a를 출력한다.

  /***
   * 프로세스를 정상적으로 마무리한다는 의미
   * (process exit call success)
   *
   * cf.  C++로 만든 프로그램은 실행 시
   * main() 함수를 찾고 그곳부터 실행함
   * 즉, cpp 파일당 반드시 하나의 main함수를 만들어야 함
   */
  return 0;  // main함수를 종료시키는 return 0
}