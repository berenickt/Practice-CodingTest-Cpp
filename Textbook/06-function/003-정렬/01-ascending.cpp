/** sort()
 * sort()는 배열 등 컨테이너들의 요소를 정렬하는 함수
 * 보통 array나 vector를 정렬할 때 쓰이며 O(nlogn)의 시간복잡도를 가짐
 *
 * sort()에 들어가는 매개변수로는 3가지가 있으며
 * 2개는 필수로 넣어야 하며
 * 1개는 선택이며 커스텀 정렬하고 싶을 때 넣습니다
 *
 * sort(first, last, *커스텀비교함수)
 * first는 정렬하고 싶은 배열의 첫번째 이터레이터,
 * last는 정렬하고 싶은 배열의 마지막 이터레이터
 * 또한 [first,last) 라는 범위를 갖습니다.
 * 즉, first는 포함하고 last는 포함하지 않는다는 의미
 *
 * e.g. 크기가 5인 a라는 배열 전체를 sort한다고 하면
 * sort(a , a + 5)라고 해야 함
 *
 * 👆 sort에는 주소값이 들어가야 하기 때문에 a[0]이 아닌 배열의 이름인 a가 들어감
 * last에 배열의 마지막요소가 아닌 그 “다음”의 위치를 넣어주어야 함
 *
 * 다시 말하면, a[0] + 5는 배열의 마지막원소가 아닙니다.
 * 마지막원소는 a[0] + 4이겠죠?
 *
 * 또한 내가 만약 3번째 요소까지만 정렬하고 싶다면,
 * sort(a, a + 3)이렇게 하면 됩니다.
 * 그렇게 하면 a[0] + 2 까지 정렬됩니다.
 *
 * sort()의 세번째 매개변수,
 * 커스텀비교함수를 넣지 않으면, 기본적으로 오름차순이며
 * 이를 커스텀비교함수에 greater<타입>()를 넣어 내림차순으로 변경할 수 있습니다.
 * 참고로 less<타입>()을 통해 오름차순으로 정렬할 수도 있습니다
 */
#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int b[5];

int main() {
  for (int i = 5; i >= 1; i--)
    b[i - 1] = i;

  for (int i = 5; i >= 1; i--)
    a.push_back(i);
  // 오름차순
  sort(b, b + 5);
  sort(a.begin(), a.end());
  for (int i : b)
    cout << i << ' ';
  cout << '\n';

  for (int i : a)
    cout << i << ' ';
  cout << '\n';
  sort(b, b + 5, less<int>());
  sort(a.begin(), a.end(), less<int>());

  for (int i : b)
    cout << i << ' ';
  cout << '\n';

  for (int i : a)
    cout << i << ' ';
  cout << '\n';
  // 내림차순
  sort(b, b + 5, greater<int>());
  sort(a.begin(), a.end(), greater<int>());

  for (int i : b)
    cout << i << ' ';
  cout << '\n';

  for (int i : a)
    cout << i << ' ';
  cout << '\n';
  return 0;
}
/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
5 4 3 2 1
5 4 3 2 1
*/