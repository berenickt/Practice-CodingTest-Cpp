#include <bits/stdc++.h>
using namespace std;
vector<int> v(3, 0);
void go(vector<int> v) { v[1] = 100; }

/**
 * vector를 값에 의한 호출을 하면 다음과 같이 됩니다.
 * vector를 넘겨서 수정해도 아무런 반영이 되지 않습니다
 */
int main() {
  go(v);

  for (int i : v)
    cout << i << '\n';
}
/*
0
0
0
*/