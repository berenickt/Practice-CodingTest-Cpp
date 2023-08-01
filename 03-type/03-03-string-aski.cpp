#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string s = "123";

  // **** ❓ 숫자로 된 문자에서 ++증감연산자를 통해 1을 더해준다면?
  // 123에서 s[0]에 1을 더해 223이 되었는데
  // 이는 아스키코드 49에서 1을 더한 값인 50이 가리키는 값이 2이기 때문에
  // 123에서 223이 되는 것
  // 즉, 문자열에서 + 하는 연산은 “아스키(ASCII)코드”를 기반으로 수행됨
  // 65는 'A', 97 : 'a' 2가지만 기억해두자!
  s[0]++;
  cout << s << "\n";  // 223
  return 0;
}
