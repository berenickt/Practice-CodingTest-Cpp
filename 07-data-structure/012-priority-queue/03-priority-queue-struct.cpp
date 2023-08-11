#include <bits/stdc++.h>
using namespace std;

struct Point {
  int y, x;
  Point(int y, int x) : y(y), x(x) {}
  Point() {
    y = -1;
    x = -1;
  }
  bool operator<(const Point &a) const { return x > a.x; }
};

priority_queue<Point> pq;

/** 구조체를 담은 우선순위큐
 * int 뿐만 아니라 구조체(struct) 등 다른 자료구조를 넣어서 할 수 있습니다
 * 코드를 보면 분명 < 연산자에 x > a.x를 했기 때문에
 * 분명 내림차순으로 정렬되어 6이 출력이 되어야 하는데 1이 출력되죠?
 * 이는 우선순위큐에 커스텀 정렬을 넣을 때 반대로 넣어야 하는 특징 때문입니다.
 */
int main() {
  pq.push({1, 1});
  pq.push({2, 2});
  pq.push({3, 3});
  pq.push({4, 4});
  pq.push({5, 5});
  pq.push({6, 6});
  cout << pq.top().x << "\n";
  return 0;
}
/*
1
*/