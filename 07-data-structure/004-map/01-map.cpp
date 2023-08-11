#include <bits/stdc++.h>
using namespace std;
/** map
 * 고유한 키를 기반으로 키 - 값(key - value) 쌍으로 이루어져 있는
 * 정렬된(삽입할 때마다 자동 정렬된) 연관 컨테이너
 *
 * 레드 - 블랙트리로 구현됨
 * 레드 - 블랙 트리로 구현되어있기 때문에
 * 삽입, 삭제, 수정, 탐색이 O(logN)의 시간복잡도
 *
 * 고유한 키를 갖기 때문에 하나의 키에 중복된 값이 들어갈 수 없으며
 * 자동으로 오름차순 정렬되기 때문에
 * 넣은 순서대로 map을 탐색할 수 있는 것이 아닌
 * 아스키코드순으로 정렬된 값들을 기반으로 탐색하게 됩니다.
 * 또한 대괄호 연산자 [] 로 해당 키로 직접 참조 가능
 *
 * e.g. "이승철" : 1, "김현영" : 2
 * 이런식으로 string : int 형태로 값을 할당해야 할 때 map을 씁니다.
 * 맵의 키와 값은 string이나 int 뿐만 아니라 다양한 값이 들어갈 수 있습니다
 */
map<string, int> mp;
string a[] = {"주홍철", "양영주", "박종선"};

int main() {
  // **** insert({key , value}) => map에다 {key, value}를 집어 넣음
  for (int i = 0; i < 3; i++) {
    mp.insert({a[i], i + 1});
    mp[a[i]] = i + 1;
  }

  // mp에 해당 키가 없다면 0으로 초기화 되어 할당됨.(int의 경우)
  // 만약 mp에 해당 키가 없는지 확인하고 싶고
  // 초깃값으로 0으로 할당되지 않아야 되는 상황이라면
  // find를 써야 함.
  cout << mp["kundol"] << '\n';

  // 대괄호로 수정가능.
  mp["kundol"] = 4;
  cout << mp.size() << '\n';

  mp.erase("kundol");
  auto it = mp.find("kundol");

  if (it == mp.end()) {
    cout << "못찾겠네 꾀꼬리\n";
  }

  /** find(key)
   * map에서 해당 key를 가진 요소를 찾아 해당 이터레이터를 반환합니다.
   * 만약 못찾을 경우 mp.end() 해당 map의 end() 이터레이터를 반환
   */
  mp["kundol"] = 100;
  it = mp.find("kundol");

  if (it != mp.end()) {
    cout << (*it).first << " : " << (*it).second << '\n';
  }

  /***
   * 범위기반 for루프로 map에 있는 요소들을 순회합니다.
   * map을 순회할 때는 key는 first, value는 second로 참조가 가능
   */
  for (auto it : mp) {
    cout << (it).first << " : " << (it).second << '\n';
  }

  // map에 있는 요소들을 이터레이터로 순회
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << (*it).first << " : " << (*it).second << '\n';
  }

  mp.clear();
  return 0;
}
/*
0
4
못찾겠네 꾀꼬리
kundol : 100
kundol : 100
박종선 : 3
양영주 : 2
주홍철 : 1
kundol : 100
박종선 : 3
양영주 : 2
주홍철 : 1
*/