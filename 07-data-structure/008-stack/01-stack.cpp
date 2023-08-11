#include <bits/stdc++.h>
using namespace std;
stack<string> stk;

/** stack
 * 가장 마지막으로 들어간 데이터가 가장 첫 번째로 나오는 성질인 후입선출(LIFO, Last In First Out)을 가진 자료 구조
 * 재귀적인 함수, 알고리즘에 사용되며 웹 브라우저 방문 기록 등에 쓰입니다.
 * 삽입 및 삭제에 O(1), 탐색에 O(n)이 걸립니다.
 *
 * 탐색에 O(n)이 걸리는 이유는 n번째 요소를 찾는다고 가정하면,
 * 계속해서 앞에 있는 요소를 끄집어내는 과정을 n 번 반복해야 찾을 수 있기 때문입니다.
 *
 * 다음은 `엄준식 화이팅`이 순차적으로 들어갔는데 나오는 것은 반대로 나옵니다.
 * 스택은 주로 문자열 폭발, 아름다운 괄호만들기, 짝찾기 키워드를 기반으로 이루어진 문제에서 쓰일 수 있습니다
 */
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // push(value) => 해당 value를 스택에 추가
  stk.push("엄");
  stk.push("준");
  stk.push("식");
  stk.push("화");
  stk.push("이");
  stk.push("팅");

  // pop() => 가장 마지막에 추가한 요소를 지움
  while (stk.size()) {
    cout << stk.top() << "\n";
    stk.pop();
  }

  /** cf
   * top()  => 가장 마지막에 있는 요소를 참조 (가장 위에 있다고도 합니다.)
   * size() => 스택의 크기
   */
}
/*
팅
이
화
식
준
엄
*/