#include <bits/stdc++.h>
using namespace std;

/** 📌 언더플로(overflow)
 * 오버플로와는 반대로 취급할 수 있는 결과값보다 작아지게 되면 언더플로가 발생
 */

int main() {
  int a = -2147483648;
  cout << a << '\n';
  a--;
  cout << a << '\n';
}
/*
-2147483648
2147483647
*/