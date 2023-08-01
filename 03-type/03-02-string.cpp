#include <bits/stdc++.h>
using namespace std;

int main() {
  string a = "love is";

  /** 📌 +=
   * 문자열에서 문자열을 더할 때 보통 += 를 써서 문자열 또는 문자를 더함
   * push_back()라는 메서드가 있지만 이는 문자하나씩밖에 더하지 못해 보통은 +=
   * 사용
   */
  a += " pain!";

  // **** 📌 pop_back() : 문자열 끝을 지웁니다. O(1)의 시간복잡도
  a.pop_back();

  /**
   * 📌 begin() : 문자열의 첫번째 요소를 가리키는 이터레이터를 반환
   * 📌 end()   : 문자열의 마지막 요소 그 다음을 가리키는 이터레이터를 반환
   *
   * cf.) begin()과 end()는 자료구조인 vector, Array, 연결리스트, 맵, 셋에서도
   * 존재하며 똑같은 의미를 지님
   */
  cout << a << " : " << a.size() << "\n";
  cout << char(*a.begin()) << '\n';
  cout << char(*(a.end() - 1)) << '\n';

  /**
   * 📌 size()
   * 문자열의 사이즈를 반환
   * O(1)의 시간복잡도
   *
   * 📌 insert(위치, 문자열)
   * 특정위치에 문자열을 삽입
   * O(n)의 시간복잡도
   *
   * 📌 erase(위치, 크기)
   * 특정위치에 크기만큼 문자열을 지움
   * O(n)의 시간복잡도
   */
  // string& insert (size_t pos, const string& str);
  a.insert(0, "test ");
  cout << a << " : " << a.size() << "\n";
  // string& erase (size_t pos = 0, size_t len = npos);
  a.erase(0, 5);
  cout << a << " : " << a.size() << "\n";

  /** 📌 find(문자열)
   * 특정 문자열을 찾아 위치를 반환
   * 만약 해당 문자열을 못 찾을 경우 string::npos를 반환하며 O(n)의 시간복잡도
   * string::npos는 size_t 타입의 최대값을 의미
   * size_t 타입의 최대값은 OS에 따라 달라지며
   * 64비트 운영체제라면 64비트 부호가 없는 최대정수,
   * 32비트 운영체제라면 32비트 부호가 없는 최대 정수값을 가집니다.
   * 64비트 운영체제이기 때문에 18446744073709551615라는 값을 가집니다
   */
  // size_t find (const string& str, size_t pos = 0);
  auto it = a.find("love");
  if (it != string::npos) {
    cout << "포함되어 있다." << '\n';
  }
  cout << it << '\n';
  cout << string::npos << '\n';

  /** 📌 substr(위치, 크기)
   * 특정 위치에서 크기만큼의 문자열을 추출합니다.
   * O(n)의 시간복잡도
   */
  // string substr (size_t pos = 0, size_t len = npos) const;
  cout << a.substr(5, 2) << '\n';
  return 0;
}
/*
love is pain : 12
l
n
test love is pain : 17
love is pain : 12
포함되어 있다.
0
18446744073709551615
is
*/