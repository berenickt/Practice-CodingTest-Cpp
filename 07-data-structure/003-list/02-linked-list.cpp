#include <bits/stdc++.h>
using namespace std;
list<int> a;

void print(list<int> a) {
  for (auto it : a)
    cout << it << " ";
  cout << '\n';
}

/** 연결리스트 리스트 종류
 * 1. 싱글연결리스트(Singly Linked List)
 * next 포인터밖에 존재하지 않으며, 한 방향으로만 데이터가 연결
 *
 * 2. 이중연결리스트(Doubly Linked List)
 * prev, next 두개의 포인터로 양방향으로 데이터가 연결
 *
 * 3. 원형연결리스트(Circular Linked List)
 * 마지막 노드와 첫번째 노드가 연결되어 원을 형성합니다.
 * 싱글연결리스트 또는 이중연결리스트로 이루어진 2가지 타입의 원형연결리스트가 존재
 *
 * C++에서는 list로 이중연결리스트를 쉽게 구현 가능
 */
int main() {
  // **** 1. push_back(value) => 뒤에서 부터 value를 넣음
  for (int i = 1; i <= 3; i++)
    a.push_back(i);

  // **** 2. push_front(value) => 리스트의 앞에서 부터 value를 넣음
  for (int i = 1; i <= 3; i++)
    a.push_front(i);

  print(a); // 3 2 1 1 2 3

  // **** begin() : 문자열의 첫번째 요소를 가리키는 이터레이터를 반환
  auto it = a.begin();
  it++;

  // **** 3. insert(idx , value) => 요소를 몇번째에 삽입
  a.insert(it, 1000);
  print(a); // 3 1000 2 1 1 2 3

  it = a.begin();
  it++;

  // **** 4. erase(idx) => 리스트의 idx번째 요소를 지움
  a.erase(it);
  print(a); // 3 2 1 1 2 3

  a.pop_front(); // 첫번째 요소를 지움
  a.pop_back();  // 맨 끝 요소를 지움
  print(a);      // 2 1 1 2

  // front() => 맨 앞 요소를 참조
  // back()  =>맨 뒤 요소를 참조
  cout << a.front() << " : " << a.back() << '\n'; // 2 : 2
  a.clear();                                      // 모든 요소를 지움

  return 0;
}
