#include <bits/stdc++.h>
using namespace std;
int i;

/**
 * 코드처럼 i에 0을 할당하면,
 * 방금 예약한 메모리 영역에 해당 값을 저장하게 됩니다.
 * 0이든 2든 3이든 다른 값을 넣어도 주소는 변하지 않습니다
 */
int main() {
  cout << &i << '\n'; // 0x100f28000
  i = 0;
  cout << &i << '\n'; // 0x100f28000
  return 0;
}
