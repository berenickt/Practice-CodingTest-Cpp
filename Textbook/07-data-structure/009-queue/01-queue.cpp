#include <bits/stdc++.h>
using namespace std;
queue<int> q;

/** 큐(queue)
 * 먼저 집어넣은 데이터가 먼저 나오는 성질인 선입선출(FIFO, First In First Out)을 지닌 자료 구조
 * 나중에 집어넣은 데이터가 먼저 나오는 스택과는 반대되는 개념
 * 삽입 및 삭제에 O(1), 탐색에 O(n)이 걸림
 *
 */
int main() {
  // 📌 push(value) => value를 큐에 추가
  for (int i = 1; i <= 10; i++)
    q.push(i);

  /**
   * 📌 pop()   => 가장 앞에 있는 요소를 제거
   * 📌 size()  => 큐의 크기
   * 📌 front() => 가장 앞에 있는 요소를 참조
   */
  while (q.size()) {
    cout << q.front() << ' ';
    q.pop();
  }

  return 0;
}
/*
1 2 3 4 5 6 7 8 9 10
*/