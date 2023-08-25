#include <bits/stdc++.h>
using namespace std;
vector<int> v;

/** 이터레이터
 * 이터레이터는 컨테이너에 저장되어 있는 요소의 주소를 가리키는 개체를 말하며
 * 포인터를 일반화한 것을 말함
 *
 * vector, map 등 각각 다르게 구현된 컨테이너들을
 * 일반화된 이터레이터를 통해 쉽게 순회 가능
 *
 * 이터레이터의 함수 중 많이 쓰는 함수 3개
 * 📌 begin()
 * 컨테이너의 시작 위치를 반환
 *
 * 📌 end()
 * 컨테이너의 끝 다음의 위치를 반환하는 데 사용
 * e.g. 보통 `it != v.end()`이런 식의 코드를 보는데,
 * 컨테이너를 다 순회하고 컨테이너의 끝에 도착했다는 것을 의미
 *
 * 📌 advance(iterator, cnt)
 * 해당 iterator를 cnt까지 증가시킴
 */
int main() {
  for (int i = 1; i <= 5; i++) {
    v.push_back(i);
  }

  for (int i = 0; i < 5; i++) {
    cout << i << "번째 요소 : " << *(v.begin() + i) << "\n";
    cout << &*(v.begin() + i) << '\n';
  }

  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << ' ';
  }
  cout << '\n';

  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *it << ' ';
  }

  /**
   * vector<int>:: iterator를 auto로도 선언할 수 있는데
   * vector<int>:: iterator가 너무 길기 때문에
   * 간단하게 이터레이터를 선언하기 위해 auto로 선언한 것
   */
  auto it = v.begin();
  advance(it, 3);
  cout << '\n';
  cout << *it << '\n';
  // cout << v.begin() << '\n'; //에러
}
/*
0번째 요소 : 1
0x124706000
1번째 요소 : 2
0x124706004
2번째 요소 : 3
0x124706008
3번째 요소 : 4
0x12470600c
4번째 요소 : 5
0x124706010
1 2 3 4 5
1 2 3 4 5
4
*/