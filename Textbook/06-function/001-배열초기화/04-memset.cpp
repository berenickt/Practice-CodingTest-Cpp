#include <bits/stdc++.h>
using namespace std;
const int max_n = 1004;
int a[max_n];
int a2[max_n][max_n];

/** memset()
 * 바이트단위로 초기화를 하며
 * 0, -1, char형의 하나의 문자(a, b, c, 등..)으로 초기화를 할 때만 사용
 *
 * void * memset ( void * ptr, int value, size_t num );
 * memset(배열의 이름, k, 배열의 크기) 이렇게 사용
 */
int main() {
  memset(a, -1, sizeof(a));
  memset(a2, 0, sizeof(a2));

  for (int i = 0; i < 10; i++)
    cout << a[i] << " ";
  return 0;
}
//-1 -1 -1 -1 -1 -1 -1 -1 -1 -1 %

/***
 * fill 보다는 간편하게 초기화하는 것을 볼 수 있습니다.
 * (특히 2차원배열은요.)
 * 0 또는 -1이란 값으로 초기화할 때는 memset을 쓰는 것이 좋습니다.
 * 🚨 그러나 0, -1 이외의 숫자는 절대 이 memset()으로 초기화 못하니 주의
 */