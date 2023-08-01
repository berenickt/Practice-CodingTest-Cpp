#include <bits/stdc++.h>
using namespace std;

/** 📌 3. string : 문자열
 * char을 아래의 코드처럼 char[] 배열로 선언하거나
 * 그냥 string으로 선언해 여러개의 문자모음이자
 * 문자배열인 문자열을 선언할 수 있습니다
 *
 * 문자열은 char[] 과 string 중 string으로 진행하며
 * 문자열은 string으로 선언하는 것을 추천
 */
int main() {
  string a = "나는야";

  // 한글로 선언한 a의 경우 a[0]을 출력했을 때 이상한 문자가 나타남
  // 문자열을 선언하고 a[0], a[1] 이렇게 접근한다는 의미는
  // 0번째, 1번째 1바이트씩 출력한다는 것을 의미합니다.
  // 영어는 한 글자당 1바이트지만 한글은 한 글자당 3바이트입니다.
  cout << a[0] << "\n";
  cout << a[0] << a[1] << a[2] << '\n';
  cout << a << "\n";

  string b = "abc";
  cout << b[0] << "\n";
  cout << b << "\n";
  return 0;
}
/*
?
나
나는야
a
abc
*/