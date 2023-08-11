#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq; // 오름차순
priority_queue<int> pq2;                           // 내림차순
priority_queue<int, vector<int>, less<int>> pq3;   // 내림차순

/** int형 우선순위큐
 * 단순하게 int형 우선순위큐는 다음 코드 처럼
 * greater<타입> 을 써서 오름차순,
 * less<타입>을 써서 내림차순으로 바꿀 수 있습니다.
 *
 * 기본값은 내림차순이라 단순하게 priority_queue<타입>을 쓰면
 * 해당 타입에 대한 내림차순으로 설정됨
 *
 * cf. 메서드는 stack과 같습니다. size(), top(), pop(), push()가 있습니다
 */
int main() {
  for (int i = 5; i >= 1; i--) {
    pq.push(i);
    pq2.push(i);
    pq3.push(i);
  }

  while (pq.size()) {
    cout << pq.top() << " : " << pq2.top() << " : " << pq3.top() << '\n';
    pq.pop();
    pq2.pop();
    pq3.pop();
  }

  return 0;
}
/*
1 : 5 : 5
2 : 4 : 4
3 : 3 : 3
4 : 2 : 2
5 : 1 : 1
*/