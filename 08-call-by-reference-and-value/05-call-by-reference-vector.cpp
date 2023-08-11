#include <bits/stdc++.h>
using namespace std;

vector<int> v(3, 0);
void go(vector<int> &v) { v[1] = 100; }

/**
 * vector를 참조에 의한 호출을 하면 다음과 같이 됩니다.
 * 넘겨서 수정했더니 원본 vector에 반영이 됩니다
 */
int main() {
  go(v);
  for (int i : v)
    cout << i << '\n';
}
/*
0
100
0
*/
