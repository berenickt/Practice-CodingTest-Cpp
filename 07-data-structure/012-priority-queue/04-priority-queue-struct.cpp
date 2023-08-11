#include <bits/stdc++.h>
using namespace std;

struct Point {
  int y, x;
  Point(int y, int x) : y(y), x(x) {}
  Point() {
    y = -1;
    x = -1;
  }
  bool operator<(const Point &a) const { return x < a.x; }
};

priority_queue<Point> pq;

/**
 * 지금 보시면 x > a.x가 x < a.x로 바뀐 모습입니다.
 * 우선순위큐에 커스텀 정렬을 넣을 때는 반대라고 생각하시면 됩니다.
 * 가장 최소를 끄집어 내고 싶은 로직이라면 > , 최대라면 < 이런식으로 설정하면 됩니다
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
6
*/
