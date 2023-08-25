/** memcpy()의 TriviallyCopyable
 * Copies count bytes from the object pointed to by src to the object pointed to by dest.
 * If the objects overlap, the behavior is undefined.
 * If the objects are not trivially copyable
 * (e.g. scalars, arrays, C-compatible structs),
 * the behavior is undefined.
 */

/***
 * is_trivial를 통해
 * 해당 타입이 TriviallyCopyable한지 확인할 수 있는데
 * vector는 그렇지 않는 것을 볼 수 있습니다.
 * 💡 memcpy()는 Array에서만 동작한다는 것을 기억해주세요
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
  if (is_trivial<vector<int>>())
    cout << "Hello Kundol!\n";
}
// kundol이 출력되지 않음