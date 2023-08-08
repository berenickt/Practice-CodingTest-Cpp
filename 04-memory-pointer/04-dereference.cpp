#include <bits/stdc++.h>
using namespace std;

int main() {
  string a = "abcda";
  string *b = &a; // b라는 포인터를 정의

  // 이 포인터에 * 연산자를 통해 역참조를 걸어서,
  // 주소값을 기반으로 값을 끄집어냄
  cout << b << "\n";
  cout << *b << "\n";
  return 0;
}
/*
0x6ffdf0
abcda
*/