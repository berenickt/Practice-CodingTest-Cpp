#include <bits/stdc++.h>
using namespace std;

/** 재귀함수를 사용할 때 주의사항
 * 1. 반드시 기저사례를 써야 한다.
 * (종료조건) fact를 보면 다음과 같은 기저사례가 있습니다.
 * if(n == 1 || n == 0) return 1;
 *
 * 2. 사이클이 있다면 쓰면 안된다.
 * e.g.) f(a)가 f(b)를 호출한 뒤 f(b)가 다시 f(a)를 호출하는 것
 *
 * 3. 반복문으로 될 거같으면 반복문으로.
 * (함수호출에 대한 코스트가 듭니다.)
 */
int fibo(int n) {
  cout << "fibo : " << n << '\n';
  if (n == 0 || n == 1)
    return n;
  return fibo(n - 1) + fibo(n - 2);
}

int n = 5;
int main() {
  cout << fibo(n) << '\n';
  return 0;
}
/*
fibo : 5
fibo : 4
fibo : 3
fibo : 2
fibo : 1
fibo : 0
fibo : 1
fibo : 2
fibo : 1
fibo : 0
fibo : 3
fibo : 2
fibo : 1
fibo : 0
fibo : 1
5
*/
