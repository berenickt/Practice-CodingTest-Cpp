#include <bits/stdc++.h>
using namespace std;

/**
 * tie를 쓰지 않는 코드
 * pair은 first, second로 값을 끄집어 내며,
 * tuple은 경우 get<0>, get<int> .. 이런식으로 값을 꺼내야 합니다
 *
 * cf.) 일일히 get<0>.. 로 끄내는 것은 별로라고 생각해서
 * 보통 3가지 이상의 멤버변수가 필요하면 tuple보다는 struct를 쓰는 편
 */
pair<int, int> pi;
tuple<int, int, int> ti;
int a, b, c;

int main() {
  pi = {1, 2};
  a = pi.first;
  b = pi.second;
  cout << a << " : " << b << "\n";  // 1 : 2

  ti = make_tuple(1, 2, 3);
  a = get<0>(ti);
  b = get<1>(ti);
  c = get<2>(ti);
  cout << a << " : " << b << " : " << c << "\n";  // 1 : 2 : 3

  return 0;
}