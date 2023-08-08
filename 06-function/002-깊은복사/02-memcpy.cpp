/***
 * 예를 들어 a라는 원본배열이 수정되는 로직이 있습니다.
 * 근데 그 다음에 이 원본배열이 수정되지 않은 상태값을 기반으로
 * 또 어떠한 로직이 필요할 때가 있습니다.
 * 그럴 때 memcpy를 주로 씁니다. (물론 다른 이유로도 쓰지만요.)
 *
 * 아래의 모습은 temp라는 배열에 a를 담아두고,
 * a를 수정하는 로직을 구현한 뒤
 * a라는 배열에 다시 예전 온전한 a를 담은 temp를 이용해
 * 다시 a를 만드는 모습입니다
 */
#include <bits/stdc++.h>
using namespace std;
int a[5], temp[5];

int main() {
  for (int i = 0; i < 5; i++)
    a[i] = i;

  memcpy(temp, a, sizeof(a));
  for (int i : temp)
    cout << i << ' ';
  cout << '\n';
  // 원본 배열 a를 수정하여 출력하는 로직
  // a를 수정해서 ~~를 더하는 로직이 될 수 있겠죠?
  a[4] = 1000;

  for (int i : a)
    cout << i << ' ';
  cout << '\n';

  // 그 다음 다시 temp를 기반으로 원본배열을 담아 둠.
  memcpy(a, temp, sizeof(temp));
  for (int i : a)
    cout << i << ' ';
  cout << '\n';
  return 0;
}
/*
0 1 2 3 4
0 1 2 3 1000
0 1 2 3 4
*/