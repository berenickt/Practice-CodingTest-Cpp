/*** getline
 * cin으로 T개의 getline을 받을지를 설정하고
 * T개 만큼 getline의 입력이 들어오는 상황이 있습니다.
 *
 * 그럴 때는 특정 문자열을 기반으로 버퍼플래시를 하고 받아야 합니다.
 * 이 이유는 cin으로 입력을 받을 때 개행문자 직전 까지 입력을 받게 되고
 * 이 때문에 중간에 위치한 버퍼에 \n이 남아있게 되는 것이죠.
 * 이를 없애주기 위해 getline(cin, bufferflush)를 해주어야 합니다
 *
 * cf. 개행문자는 한 칸 띄어쓰기, 한줄 띄어쓰기를 말함
 */
#include <bits/stdc++.h>
using namespace std;
int T;
string s;

int main() {
  cin >> T;
  string bufferflush;
  getline(cin, bufferflush);
  for (int i = 0; i < T; i++) {
    getline(cin, s);
    cout << s << "\n";
  }
  return 0;
}