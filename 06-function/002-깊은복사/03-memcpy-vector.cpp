/*** memcpy() 주의해야할 점
 * memcpy()는 vector에서는 깊은 복사가 되지 않습니다
 */
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> v{1, 2, 3};
  vector<int> ret(3);
  memcpy(&ret, &v, 3 * sizeof(int));
  cout << ret[1] << "\n";
  ret[1] = 100;
  cout << ret[1] << "\n";
  cout << v[1] << "\n";
  return 0;
}
/*
2
100
100
*/

/***
 * 앞의 코드처럼 ret[1]을 수정했더니 v[1]도 수정되는 것을 볼 수 있습니다.
 * 이는 memcpy()는 TriviallyCopyable인 타입이 아닌 경우
 * 함수자체가 제대로 동작하지 않습니다
 */