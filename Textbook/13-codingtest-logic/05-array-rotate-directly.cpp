#include <bits/stdc++.h>
using namespace std;

/** 직접 구현하는 방법
 * 만약 함수를 사용하지 안고 앞의 코드를 구현한다면 어떻게 해야할까요? 1번 ~ 4번까지의
 * 요소를 1칸씩 회전한다고 해보죠.
 * 이런식으로 temp를 기반으로 코드를 구축하면 됩니다
 */
int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6};
  int i = 1;
  int temp = v[i];
  v[i] = v[i + 1];
  v[i + 1] = v[i + 2];
  v[i + 2] = v[i + 3];
  v[i + 3] = temp;

  for (int i : v)
    cout << i << ' '; // 1 3 4 5 2 6
}

/**
 * 앞의 코드처럼 맨 앞을 temp에 담아놓고
 * 뒤에 있는 것들을 배열에 요소에 집어넣은 다음,
 * 마지막 temp를 마지막 요소에 집어넣는 코드입니다.
 */