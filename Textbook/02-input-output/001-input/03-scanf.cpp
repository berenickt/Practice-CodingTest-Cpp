/*** sacnf
 * 첫번째 매개변수로 받는 형식을 지정해서 입력을 받음
 * scanf는 주로 입력형식이 까다롭거나 이를 이용해야할 때 사용하는게 좋으며
 * 보통은 cin을 쓰는게 좋습니다
 *
 * %d   : int 타입
 * %c   : char 타입
 * %s   : string 타입
 * %lf  : double 타입
 * %ld  : long long 타입
 */
#include <bits/stdc++.h>
using namespace std;
int a;
double b;
char c;

int main() {
  scanf("%d %lf %c", &a, &b, &c);
  printf("%d\n", a);
  printf("%lf\n", b);
  printf("%c\n", c);
  return 0;
}
/*
입력
23330
233.23123
a

출력
23330
233.231230
a
*/