/*** scanf를 활용해 실수타입을 정수타입을 받아보기
 * 3.22처럼 double 타입으로 들어오는 것을 double 타입으로 받을 수 있지만
 * scanf를 이용해서 int타입 2개를 만들어 받을 수 있습니다
 */
#include <bits/stdc++.h>
using namespace std;
int a, b;
double c;

int main() {
  scanf("%d.%d", &a, &b);
  printf("\n%d %d\n", a, b);

  scanf("%lf", &c);
  printf("%lf\n", c);
  return 0;
}
/*
입력
3.22
3.22

출력
3 22
3.220000
*/