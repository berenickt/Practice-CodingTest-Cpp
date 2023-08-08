/*** memcpy()와 copy()
 * 어떤 변수를 깊은 복사할 때 memcpy()와 copy()를 씁니다.
 * - memcpy()는 Array끼리 복사할때 쓰고,
 * - copy()는 Array, vector에 모두 쓰입니다
 */

/*** 얕은 복사와 깊은 복사
 * 📌 얕은 복사(Shallow copy)
 * 메모리 주소값을 복사한 것이라
 * 복사한 배열을 수정하면 원본 배열이 수정되는 복사방법
 *
 * 📌 깊은 복사(Deep copy)
 * 새로운 메모리 공간을 확보해 완전히 복사해
 * 복사한 배열을 수정하면 원본 배열은 수정되는 않는 복사방법을 의미
 */

/*** 📌 memcpy()
 * 어떤 변수의 메모리에 있는 값들을 다른 변수의 “특정 메모리값”으로 복사할때 사용
 * Array를 깊은 복사할 때 씀
 *
 * void * memcpy ( void * destination, const void * source, size_t num );
 * 이처럼 v라는 Array를 ret에다가 복사
 */
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int v[3] = {1, 2, 3};
  int ret[3];

  memcpy(ret, v, sizeof(v));
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

/**
 * 제대로 깊은 복사가 되어 ret을 수정하더라도
 * vector v는 수정되지 않는 것을 볼 수 있습니다
 */