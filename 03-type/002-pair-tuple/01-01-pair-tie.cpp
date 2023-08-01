#include <bits/stdc++.h>
using namespace std;

/** 📌 pair
 * tie를 써서 pair이나 tuple로부터 값을 끄집어내는 코드
 *
 * {a, b} 또는 make_pair(a, b)로 만들 수 있습니다
 * 그저 2개의 원소를 담은 바구니를 생각하면 됩니다
 *
 * 원래는 a = pi.first; b = pi.second 이런식으로 끄집어내야 하는데,
 * tie를 쓰게 되면 tie(a, b) = pi 이렇게 끄집어 낼 수 있습니다
 */
pair<int, int> pi;
tuple<int, int, int> tl;
int a, b, c;

int main() {
  pi = {1, 2};
  tl = make_tuple(1, 2, 3);

  tie(a, b) = pi;
  cout << a << " : " << b << "\n";

  tie(a, b, c) = tl;
  cout << a << " : " << b << " : " << c << "\n";
  return 0;
}