#include <bits/stdc++.h>
using namespace std;

/** deque
 * 앞서 설명한 queue는 앞에서만 끄집어낼 수 있다면,
 * deque는 앞뒤로 삽입, 삭제, 참조가 가능한 자료구조
 */
int main() {
  deque<int> dq;
  dq.push_front(1);
  dq.push_back(2);
  dq.push_back(3);
  // 1 2 3

  cout << dq.front() << "\n"; // 1
  cout << dq.back() << "\n";  // 3
  cout << dq.size() << "\n";  // 3

  dq.pop_back();
  dq.pop_front();
  cout << dq.size() << "\n"; // 1

  return 0;
}
/*
1
3
3
1
*/