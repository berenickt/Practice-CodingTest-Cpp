/***
 * memcpy()와 똑같은 동작을 하는 함수입니다.
 * vector와 Array 모두 쓰일 수 있습니다.
 * copy (InputIterator first, InputIterator last, OutputIterator result)
 *
 * 만약 vector v를 ret에다가 옮기고 싶다면?
 * v : 복사당하는 vector / ret : 복사하는 vector
 * copy(v.begin(), v.end(), ret.begin());
 */
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> v{1, 2, 3};
  vector<int> ret(3);

  copy(v.begin(), v.end(), ret.begin());
  cout << ret[1] << "\n";

  ret[1] = 100;
  cout << ret[1] << "\n";
  cout << v[1] << "\n";
  return 0;
}
/*
2
100
2
*/

/***
 * ret이란 vector에 vector v의 값이 잘 들어간 것을 볼 수 있습니다.
 * 이때 복사하는 vector와 복사당하는 vector의 크기를 맞춰주는 것이 중요합니다.
 *
 * v의 크기는 3이며, ret의 크기도 3으로 설정된 것을 볼 수 있습니다.
 * 그리고 깊은 복사가 되어 ret을 수정하더라도,
 * v에는 아무런 영향을 미치지 않는 것을 볼 수 있습니다
 */