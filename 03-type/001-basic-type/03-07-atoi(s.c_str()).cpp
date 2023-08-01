#include <bits/stdc++.h>
using namespace std;

/** 📌 atoi(s.c_str())
 * 문자열을 int로 바꿔야 할 상황
 * 입력이 “amumu” 또는 0 이렇게 온다라고 했을 때,
 * 문자열, string으로 입력을 받아
 * 입력받은 글자가 문자열인지 숫자인지 확인해야 하는 로직이 필요할 때
 */
int main() {
  string s = "1";
  string s2 = "amumu";

  // ** 입력받은 문자열이 문자라면 0을 반환하고 그게 아니라면 숫자를 반환
  cout << atoi(s.c_str()) << '\n';   // 1
  cout << atoi(s2.c_str()) << '\n';  // 0
  return 0;
}
