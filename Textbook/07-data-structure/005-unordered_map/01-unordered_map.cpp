#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> umap;

/** map과 unordered_map
 * map은 정렬이 되는 반면
 * unordered_map은 정렬이 되지 않은 map이며 메서드는 map과 동일
 *
 * 📌 map :
 * 정렬이 됨
 * 레드블랙트리기반
 * 탐색, 삽입, 삭제에 O(logN)이 걸림
 *
 * 📌 unordered_map
 * 정렬이 안됨
 * 해시테이블 기반
 * 탐색, 삽입, 삭제에 평균적으로 O(1), 가장 최악의 경우 O(N)
 *
 * 문제에 정렬이 필요로 하지 않은 문제에는 unordered_map을 써도 될 것 같지만
 * 제출해보면 시간초과가 나기도 합니다.
 * 이는 가장 최악의 경우 O(N)이기 때문이죠. 되도록 map을 쓰는 것을 권장
 */
int main() {
  umap["bcd"] = 1;
  umap["aaa"] = 1;
  umap["aba"] = 1;

  for (auto it : umap) {
    cout << it.first << " : " << it.second << '\n';
  }
}
/*
정렬이 되지 않는다.
aba : 1
aaa : 1
bcd : 1
*/