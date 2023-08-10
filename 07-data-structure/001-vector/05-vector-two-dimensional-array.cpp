#include <bits/stdc++.h>
using namespace std;

// **** vector를 이용한 2차원 배열을 만드는 3가지 방법
// ** (1)
// vector안의 vector가 들어가 있는 2차원 배열 타입을 선언
// v에 temp라는 vector를 push_back해서 2차원 배열을 만듬
vector<vector<int>> v;

// ** (2)
// 10 * 10 짜리 크기의 2차원배열 선언
// 0으로 초기화함
vector<vector<int>> v2(10, vector<int>(10, 0));

// ** (3)
// 10개 짜리 배열을 선언
// 이는 v와 똑같은 2차원배열
// v 같은 경우 vector 10개를 담음
vector<int> v3[10];

int main() {
  for (int i = 0; i < 10; i++) {
    vector<int> temp;
    v.push_back(temp);
  }
  return 0;
}
