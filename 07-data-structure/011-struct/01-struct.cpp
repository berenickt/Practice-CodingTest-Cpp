/** struct(구조체)
 * C++에서 제공하는 자료구조가 아닌 개발자의 커스텀한 자료구조를 의미
 * 커스텀하게 정렬을 추가하고 싶거나 문제에서 여러개의 변수
 * e.g.) a, b, c, d, e 가 들어간 자료구조가 필요하다면 struct를 사용
 *
 * e.g.) int 타입의 2개의 멤버변수, double 타입의 3개의 멤버 변수가 필요하다고 가정.
 * cf.) `멤버변수`란 클래스 또는 구조체 내부의 변수이자 메소드 밖에 있는 변수를 의미.
 */
#include <bits/stdc++.h>
using namespace std;

/** Ralo라는 구조체
 * int 타입의 2개의 멤버변수,
 * double 타입의 3개의 멤버 변수를 가진 간단한 구조체
 */
struct Ralo {
  int a, b;
  double c, d, e;
};

/***
 * 정해지지 않고 커스텀하게 만든 것을 볼 수 있으며
 * vector에도 집어넣은 모습을 볼 수 있습니다.
 *
 * 또한 만약 값을 집어넣지 않은 경우 0으로 초기화되는 것을 볼 수 있습니다.
 * char 또는 string으로 선언한 경우
 * 값을 집어넣지 않게 되면 빈문자열이 들어가게 됩니다.
 */
void print(Ralo ralo) { cout << ralo.a << " " << ralo.b << " " << ralo.c << " " << ralo.d << " " << ralo.e << '\n'; }
int main() {
  Ralo ralo = {1, 1, 1, 1, 1};
  print(ralo);
  vector<Ralo> ret;

  ret.push_back({1, 2, 3, 4, 5});
  ret.push_back({1, 2, 3, 4, 6});
  ret.push_back({});
  ret.push_back({1, 3});

  for (Ralo ralo : ret) {
    print(ralo);
  }

  return 0;
}
/*
1 1 1 1 1
1 2 3 4 5
1 2 3 4 6
0 0 0 0 0
1 3 0 0 0
*/

/**
 * 그러면 이 간단한 구조체를 집어넣은 vector를 정렬한다면 어떻게 해야할까요?
 * a를 1순위로, b를 2순위로 오름차순으로 정렬하고 싶다면 어떻게 해야할까요?
 *
 * 또한 지금은 아무것도 집어넣지 않을 경우
 * 0 또는 빈 문자열이 들어가게 되는데 초기값을 설정하고 싶다면 어떻게 해야할까요?
 * 이렇게 요구사항이 많아지게 되면 조금은 복잡하게 구조체를 구축해야 합니다.
 */