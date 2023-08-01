#include <bits/stdc++.h>
using namespace std;

/** C++11부터 범위기반 for 루프
 * vector 내의 있는 요소들을 쉽게 순회
 * 1번코드와 2번코드는 같은 의미
 * for({타입} {임시변수명} : {타입을 담은 컨테이너})
 */
int main() {
  vector<int> a = {1, 2, 3};
  for (int b : a) cout << b << "\n";                        // 1
  for (int i = 0; i < a.size(); i++) cout << a[i] << "\n";  // 2
  return 0;
}
/*
1
2
3
1
2
3
*/