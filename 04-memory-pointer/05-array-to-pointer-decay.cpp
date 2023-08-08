#include <bits/stdc++.h>
using namespace std;
int a[3] = {1, 2, 3};

/** array to pointer decay
 * 배열이 포인터로 부식(decay)되는 현상을 말합니다.
 * 이는 배열의 이름을 T * 라는 포인터에 할당하면서,
 * T[N]이란 배열의 크기 정보 N이 없어지고 첫번째 요소의 주소가 바인딩되는 현상을 의미
 */
int main() {
  int *c = a;

  // 포인터 c에 할당한 배열의 이름이 &a[0]과 같은 의미
  cout << c << "\n";
  cout << &a[0] << "\n";

  cout << c + 1 << "\n";
  cout << &a[1] << "\n";
  return 0;
}
/*
0x472010
0x472010
0x472014
0x472014
*/