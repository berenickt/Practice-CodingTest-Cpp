/***
 * cout << 출력할 것 <<"\n"해서 하는게 일반적
 * “한칸” 띄어쓰기를 원한다면 cout << "출력할 것" << " "; 이렇게 넣어도 됨
 * << 이어서 입력할 문자열이나 문자를 넣어도 됨
 */
#include <bits/stdc++.h>
using namespace std;
string a = "도랄팍 화이팅! ";
string b = "윤하 노래 너무 좋다...";

int main() {
  cout << a << '\n';
  cout << a << " "
       << "" << b << '\n';
  return 0;
}
/*
도랄팍 화이팅!
도랄팍 화이팅! 윤하 노래 너무 좋다...
*/