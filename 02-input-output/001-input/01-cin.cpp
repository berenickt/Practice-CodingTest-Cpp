/*** cin과 scanf
 * cin   : 개행문자까지 입력을 받음
 * scanf : 형식을 지정해서 입력을 받음
 *
 * 문제에서 형식을 기반으로 입력이 주어지지 않은 경우
 * scanf보다는 cin을 쓰는 것이 좋습니다.
 * cin은 개행문자(띄어쓰기, 엔터)까지 입력을 받음
 */
#include <bits/stdc++.h>
using namespace std;

string a;

int main() {
  cin >> a;
  cout << a << "\n";
  return 0;
}
/*
입력
양영주 바보

출력
양영주
*/