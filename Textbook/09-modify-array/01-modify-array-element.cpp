#include <bits/stdc++.h>
using namespace std;

int a[3] = {1, 2, 3};
void go(int a[]) { a[2] = 100; }
void go2(int a[3]) { a[2] = 1000; }
void go3(int *a) { a[2] = 10000; }

/**
 * Array의 요소를 수정할 때는
 * 다음처럼 크기를 정하지 않은 int a[], 또는
 * 배열의 크기인 int a[3], 배열의 포인터인 int * a를 넘겨서 수정할 수 있습니다
 */
int main() {
  go(a);
  cout << a[2] << '\n'; // 100

  go2(a);
  cout << a[2] << '\n'; // 1000

  go3(a);
  cout << a[2] << '\n'; // 10000
}
