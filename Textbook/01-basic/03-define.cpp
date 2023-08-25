#include <bits/stdc++.h>
using namespace std;

/*** define
 * define을 통해 상수, 매크로를 정의
 *
 * 📌 사용법
 * #define <이름> <값>
 *
 * PI라는 상수를 정의
 * for 반복문을 loop라는 문자열로 치환
 */
#define PI 3.14159
#define loop(x, n) for (int x = 0; x < n; x++)

int main() {
  cout << PI << '\n';
  int sum = 0;
  loop(i, 10) { sum += i; }
  cout << sum << '\n';
  return 0;
}

/*
3.14159
45
*/