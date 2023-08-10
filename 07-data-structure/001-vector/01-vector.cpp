#include <bits/stdc++.h>
using namespace std;
vector<int> v;

/** vector
 * vector<타입> 변수명
 *
 * 👉 동적으로 요소를 할당할 수 있는 동적 배열
 * 만약 컴파일 시점에 사용해야 할 요소들의 개수를 모른다면 vector를 써야함
 * 연속된 메모리 공간에 위치한 같은 타입의 요소들의 모음이며
 * 숫자인덱스를 기반으로 랜덤접근이 가능하며 중복을 허용함
 *
 * 탐색과 맨 뒤의 요소를 삭제하거나 삽입하는 데 O(1)이 걸리며,
 * 맨 뒤나 맨 앞이 아닌 요소를 삭제하고 삽입하는 데 O(n)의 시간이 걸림
 *
 */
int main() {
  /** 📌 1. push_back
   * vector의 뒤에서부터 요소를 더합니다.
   * cf. push_back()과 같은 기능을 하는 emplace_back()도 있음
   * emplace_back()이 더 빠르지만 시간차이는 별로 나지 않음
   */
  for (int i = 1; i <= 10; i++)
    v.push_back(i);

  for (int a : v)
    cout << a << " "; // 1 2 3 4 5 6 7 8 9 10
  cout << "\n";

  /** 📌 2. pop_back()
   * vector의 맨 뒤의 요소를 지움
   */
  v.pop_back();
  for (int a : v)
    cout << a << " "; // 1 2 3 4 5 6 7 8 9
  cout << "\n";

  /** 📌 3. erase[from, to)
   * erase로 한 요소만을 지운다면 erase(위치)로 쓰이지만
   * [from, to)로 지우고 싶다면 erase[from, to)를 통해 지움
   */
  v.erase(v.begin(), v.begin() + 3);
  for (int a : v)
    cout << a << " "; // 4 5 6 7 8 9
  cout << "\n";

  /** 📌 4. find(from, to, value)
   * vector의 메서드가 아닌 STL 함수
   * [from, to) 에서 value를 찾습니다.
   * vector 내의 요소들을 찾고 싶을 때 이를 통해 찾습니다.
   * O(n)의 시간복잡도
   */
  auto a = find(v.begin(), v.end(), 100);
  if (a == v.end())
    cout << "not found"
         << "\n"; // not found

  /** 📌 5. fill(from, to, value)
   * vector 내의 value로 값을 할당하고 싶다면 fill을 써서 채움
   * 보통 이를 ~~한 값으로 초기화라고 부릅니다.
   * [from, to) 구간에 value를 초기화
   */
  fill(v.begin(), v.end(), 10);
  for (int a : v)
    cout << a << " "; // 10 10 10 10 10 10

  cout << "\n";

  /** 📌 6. clear()
   * vector의 모든 요소를 지움
   */
  v.clear();
  cout << "아무것도 없을까?\n"; // 아무것도 없을까?

  return 0;
}
