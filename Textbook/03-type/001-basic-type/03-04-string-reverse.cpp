#include <bits/stdc++.h>
using namespace std;

/** 📌 reverse()
 * string은 reverse()라는 메서드를 지원하지 않습니다.
 * 문자열을 거꾸로 뒤집고 싶다면,
 * STL에서 지원하는 함수인 reverse()를 쓰면 됩니다.
 * reverse() 함수는 void 타입으로 아무것도 반환하지 않습니다.
 * 그리고 원본 문자열도 바꿔버립니다.
 */
int main() {
  string a = "It's hard to have a sore leg";
  reverse(a.begin(), a.end());
  cout << a << '\n';

  reverse(a.begin(), a.end());
  cout << a << '\n';

  // **** begin() + 3
  // a.begin() + 3 처럼
  // 시작위치를 바꿔 뒤집고 싶은 부분만을 바꿀 수 있습니다
  reverse(a.begin() + 3, a.end());
  cout << a << '\n';
  return 0;
}
/*
gel eros a evah ot drah s'tI
It's hard to have a sore leg
It'gel eros a evah ot drah s
*/